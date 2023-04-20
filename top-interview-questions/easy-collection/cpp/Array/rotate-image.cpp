//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/770/

#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        int len = matrix.size();
        for(int iter = 0; len-(2*iter) > 1; iter++){
            for(int i = iter; i < len - iter - 1; i++){
                int buffer = matrix[iter][i];
                matrix[iter][i] = matrix[len-1-i][iter];
                matrix[len-1-i][iter] = matrix[len-1-iter][len-1-i];
                matrix[len-1-iter][len-1-i] = matrix[i][len-1-iter];
                matrix[i][len-1-iter] = buffer;     
            }
        }
    }
};