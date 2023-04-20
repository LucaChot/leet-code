//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/885/

#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h_pointer = 0, n_pointer = 0;
        int h_len = haystack.length(), n_len = needle.length();
        while(h_pointer < h_len){
            if(n_pointer == n_len) return h_pointer - n_len;
            if(haystack[h_pointer] == needle[n_pointer]){
                n_pointer++;
            }else{
                h_pointer -= n_pointer;
                n_pointer = 0;
            }
            h_pointer++;
        }
        if(n_pointer == n_len) return h_pointer - n_len;
        return -1;
    }
};