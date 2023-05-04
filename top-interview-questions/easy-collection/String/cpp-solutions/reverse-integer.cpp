//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/880/

#include <vector>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int r = 0;
        long rev = 0;
        while(x > 0 || x < 0){
            r = x % 10;
            rev = rev * 10 + r;
            x = x / 10 ;
        }
        if(rev > INT_MAX || rev < INT_MIN) return 0;  
        return int(rev);
    }
};