#include <iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {
            return "";
        }

        string common_prefix = strs[0];

        for(int i=1; i<strs.size(); i++) {
            int j = 0;
            while(j < common_prefix.size() && j < strs[i].size() && common_prefix[j] == strs[i][j]) {
                j++;
            }

            common_prefix = common_prefix.substr(0, j);

            if(common_prefix.empty()) {
                return "";
            }
        }

        return common_prefix;
    }
};


int main()
{
    vector<string> strs {"flower", "flow", "flight"};
    Solution solution;
    cout << solution.longestCommonPrefix(strs);
    
    return 0;
}