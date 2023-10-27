#include <iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    unordered_map<char, int> romanNumerals = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    int result = 0;
    int prev_value = 0;
    
    for(int i=s.length() - 1; i>=0; i--) {
        int value = romanNumerals[s[i]];
        if(value < prev_value) {
            result -= value;
        } else {
            result += value;
        }
        prev_value = value;
    }
    
    cout << result;
    
    return 0;
}