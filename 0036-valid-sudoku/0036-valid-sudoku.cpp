class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0; row<9; row++){
            set<int> s1;
            for(int col=0; col<9; col++){
                if(board[row][col]!='.' && s1.find(board[row][col])!=s1.end())
                    return false;
                if(board[row][col]!='.')
                    s1.insert(board[row][col]);
            }
        }
        
        for(int col=0; col<9; col++){
            set<int> s2;
            for(int row=0; row<9; row++){
                if(board[row][col]!='.' && s2.find(board[row][col])!=s2.end())
                    return false;
                if(board[row][col]!='.')
                    s2.insert(board[row][col]);
            }
        }
        
        for (int boxRow = 0; boxRow < 3; boxRow++) {
            for (int boxCol = 0; boxCol < 3; boxCol++) {
                unordered_set<char> s3;
                for (int row = boxRow * 3; row < boxRow * 3 + 3; row++) {
                    for (int col = boxCol * 3; col < boxCol * 3 + 3; col++) {
                        if (board[row][col] != '.' && s3.find(board[row][col]) != s3.end())
                            return false;
                        if (board[row][col] != '.')
                            s3.insert(board[row][col]);
                    }
                }
            }
        }

        return true;
    }
};