class Solution {
public:
    int ans=0; 

    bool saff(vector<vector<int>> board, int row, int col, int n){

        for(int r=0; r<row; r++)
            if(board[r][col]==1)
                return false;
        

        for(int r=row-1, c=col-1; r>=0 && c>=0; r--, c--)
            if(board[r][c]==1)
                return false;
        
        for(int r=row-1, c=col+1; r>=0 && c<n; c++, r--)
            if(board[r][c]==1)
                return false;
        
    return true;
        
    }


    void back(vector<vector<int>> board, int row, int n){
        if(row==n){
            ans++;
            return;
        }

        for(int col=0; col<n; col++){
            if(saff(board, row, col, n)){
                board[row][col]=1;
                back(board, row+1, n);
                board[row][col]=0;
            }
        }
    }

    int totalNQueens(int n) {
        vector<vector<int>> boa(n, vector<int>(n,0));
        back(boa, 0, n);
        return ans;
    }
};