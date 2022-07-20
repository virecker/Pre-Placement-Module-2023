class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] != '.'){
                    if(valid(board, i, j) == false){
                        
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
    
    bool valid(vector <vector <char>> &board, int row ,int col){
        int count_number_in_grid = 0;
        for(int i = 0; i < board.size(); i++){
            
            if(board[row][i] == board[row][col] && col != i) return false;
            
            
            if(board[i][col] == board[row][col] && row != i) return false;
            
            
            if(board[3*(row/3) + i/3][3*(col/3) + i%3] == board[row][col]){
                count_number_in_grid ++;
                
                if(count_number_in_grid > 1){
                    return false;
                }
            }
            
        }
        return true;
    }
};