class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int row=-1;
        for(int i=0; i<rows; i++){
            if(target>=matrix[i][0] && target<=matrix[i][columns-1]){
                row=i;
            }
        }
        if(row == -1)
            return false;
        for(int j=0; j<columns; j++){
            if(matrix[row][j]==target)
                return true;
        }
        return false;
    }
};