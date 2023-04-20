//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/881/

#include <string>
using namespace std;

typedef struct pair{
    int count;
    int index;
} Pair;


class Solution {
public:
    int firstUniqChar(string s) {
        Pair letters[26];
        for(int i = 0; i < 26; i++){
            letters[i].count = 0;
        }
        int len = s.length();
        for(int i = 0; i < len; i++){
            letters[s[i] - 97].count += 1;
            if(letters[s[i]-97].count == 1) letters[s[i]-97].index = i;
        }
        int index = len;
        for(int i = 0; i < 26; i++){
            if(letters[i].count == 1 && letters[i].index < index) index = letters[i].index;
        }
        
        if(index == len) return -1;
        return index;
    }
};