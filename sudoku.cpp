class Solution {
  public:
    // Function to find a solved Sudoku.
    bool solve(vector<vector<int>>&board){
        int n=board.size();
        
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                
                if(board[r][c]==0){
                    for(int val=1;val<=9;val++){
                        if(isSafe(r,c,board,val)){
                            board[r][c]=val;
                            //recusr=ive call
                          
                            if(solve(board))return true;
                            board[r][c]=0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isSafe(int r,int c,vector<vector<int>>&board,int val){
        int n=board[0].size();
        for(int i=0;i<n;i++){
            //row check
            if(board[r][i]==val)return false;
            //col check
            if(board[i][c]==val)return false;
            //3*3 matrix check
            if(board[3*(r/3)+ i/3][3*(c/3)+ i%3]==val)return false;
        }
        return true;
    }
    
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        solve(mat);
    }
};
