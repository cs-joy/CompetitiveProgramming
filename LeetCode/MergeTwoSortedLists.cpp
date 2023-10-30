#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // Create a dummy node to simplify handling the head of the result list.
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    // If one of the lists is exhausted, simply attach the other list.
    if (list1 != nullptr) {
        current->next = list1;
    } else {
        current->next = list2;
    }

    // The merged list starts from the next of the dummy node.
    ListNode* mergedList = dummy->next;

    // Free the dummy node.
    delete dummy;

    return mergedList;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // Create two sorted linked lists
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    std::cout << "List 1: ";
    printList(list1);

    std::cout << "List 2: ";
    printList(list2);

    ListNode* mergedList = mergeTwoLists(list1, list2);

    std::cout << "Merged List: ";
    printList(mergedList);

    return 0;
}
