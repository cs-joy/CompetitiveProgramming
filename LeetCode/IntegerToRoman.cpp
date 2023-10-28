#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string output = "";

        for(int i=0; num > 0; i++) {
            while(num >= values[i]) {
                output += symbols[i];
                num -= values[i];
            }
        }

        return output;
    }
};


int main() {
    int num;
    cin >> num;
    Solution solution;
    cout << solution.intToRoman(num) << endl;
    
    return 0;
}