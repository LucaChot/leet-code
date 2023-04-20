//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/882/

#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int len = s.length();
        if(len != t.length()) return false;
        int letters[26];
        for(int i = 0; i < 26; i++){
            letters[i] = 0;
        }
        for(int i = 0; i < len; i++){
            letters[s[i] - 'a'] += 1;
            letters[t[i] - 'a'] -= 1;
        }
        for(int i = 0; i < 26; i++){
            if(letters[i] != 0) return false;
        }
        return true;
    }
};