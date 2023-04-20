//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/559/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=digits.size();
        int i=s-1;
        digits[i]=digits[i]+1;
        while(digits[i]==10 && i>0){
            digits[i]=0;
            digits[i-1]=digits[i-1]+1;
            i--;
        }
        if(digits[0]==10){
            digits[0]=0;
            digits.insert(digits.begin(),1);

        }
        return digits;
    }
};

