#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for(char c: s) {
            if(c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else if(c == ')' || c == '}' || c == ']') {
                if(stack.empty()) {
                    return false;
                }

                char openBracket = stack.top();
                stack.pop();
                if(
                    (c == ')' && openBracket != '(') ||
                    (c == '}' && openBracket != '{') ||
                    (c == ']' && openBracket != '[')
                ) {
                    return false;
                }
            }
        }

        return stack.empty();
    }
};

int main() {
    string s;
    cin >> s;

    Solution solution;
    cout << solution.isValid(s);

    return 0;
}