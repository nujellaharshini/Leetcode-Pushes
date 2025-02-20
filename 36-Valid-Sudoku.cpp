class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // First check to see if there is more than 1 num in the rows & columns
        int rows[9][9] = {0};
        int columns[9][9] = {0};
        int subgrid[9][9] = {0};
        int process_number = '0' + 1;
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board.size(); j++){
                int equation_subgrid = i/3*3 + j/3; // multiplying by 3 to correctly scale within the 9 sub-grids
                if (board[i][j] != '.'){
                    int number = board[i][j] - process_number;
                    if (rows[i][number] || columns[j][number] || subgrid[equation_subgrid][number]){
                        return false;
                    }
                    rows[i][number] = columns[j][number] = subgrid[equation_subgrid][number] = 1;
                }
            }
        }
        return true;
    }
};