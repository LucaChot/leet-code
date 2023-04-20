//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/887/

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int pointer = 0, s_len = strs.size();
        while(true){
            if(pointer >= strs[0].length()) return prefix;
            char c = strs[0][pointer];
            for(int i = 1; i < s_len; i++){
                if(pointer >= strs[i].length() || strs[i][pointer] != c) return prefix;
            }
            prefix += c;
            pointer++;
        }
    }
};