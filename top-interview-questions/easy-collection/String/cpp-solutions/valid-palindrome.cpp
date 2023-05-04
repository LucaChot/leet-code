//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/883/

#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        int start = 0;
        int end = len - 1;
        while(start <= end){
            if((s[start] < 'a' || s[start] > 'z') && (s[start] < 'A' || s[start] > 'Z') && (s[start] < '0' || s[start] > '9')){
                start++;
                continue;
            }
            if((s[end] < 'a' || s[end] > 'z') && (s[end] < 'A' || s[end] > 'Z') && (s[end] < '0' || s[end] > '9')){
                end--;
                continue;
            }
            if(s[start] >= 'A' && s[start] < 'a') s[start] = s[start] + 32;
            if(s[end] >= 'A' && s[end] < 'a') s[end] = s[end] + 32;
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};