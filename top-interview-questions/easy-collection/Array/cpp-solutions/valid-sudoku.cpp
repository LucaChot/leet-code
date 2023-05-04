//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/769/

#include <vector>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char> >& board) {
        //test for horizontal lines
        for(int i = 0; i < 9; i++){
            bool b[9];
            for(int k = 0; k < 9; k++){
                b[k] = false;
            }
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                if(b[board[i][j]-49]) return false;
                b[board[i][j]-49] = true;
            }
        }
        //test for vertical lines
        for(int i = 0; i < 9; i++){
            bool b[9];
            for(int k = 0; k < 9; k++){
                b[k] = false;
            }
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.') continue;
                if(b[board[j][i]-49]) return false;
                b[board[j][i]-49] = true;
            }
        }
        for(int i = 0; i < 9; i++){
            bool b[9];
            int x = i % 3;
            int y = i / 3;
            for(int k = 0; k < 9; k++){
                b[k] = false;
            }
            
            for(int row = 3 * y; row < 3 * (y+1); row ++){
                for(int col = 3 * x; col < 3 * (x+1); col++){
                    if(board[row][col] == '.') continue;
                    
                    if(b[board[row][col]-'1']) return false;
                    
                    b[board[row][col]-'1'] = true;
                }
            }
        }
        return true;
    }
};