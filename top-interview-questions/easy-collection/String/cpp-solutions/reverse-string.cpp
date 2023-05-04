//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/

#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        for(int i = 0; i < len / 2; i++){
            char buf = s[i];
            s[i] = s[len-1-i];
            s[len-1-i] = buf;
        }
    }
};