class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {

        int n=grid.size();

        for(int i=1; i<n; i++){
            int min1=INT_MAX;
            int min2=INT_MAX;
            int in=-1;

            for(int j=0; j<n; j++){

                if(grid[i-1][j]<min1){
                    min2=min1;
                    min1=grid[i-1][j];
                    in=j;
                }
                else if(grid[i-1][j]<min2){
                    min2=grid[i-1][j];
                }

            }

            for(int j=0; j<n; j++){
                if(j==in)
                    grid[i][j]+=min2;
                else
                    grid[i][j]+=min1;
            }

        }

        int ans=INT_MAX;

        for(int i=0; i<n; i++)
            ans=min(ans, grid[n-1][i]);

        return ans;
        
    }
};