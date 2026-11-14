class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {

        int n=grid.size();

        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                int temp=INT_MAX;

                for(int h=0; h<n; h++){
                    if(h!=j)
                        temp=min(temp, grid[i][j]+grid[i-1][h]);
                }
                grid[i][j]=temp;
            }
        }

        int ans=INT_MAX;

        for(int i=0; i<n; i++)
            ans=min(ans, grid[n-1][i]);

        return ans;
        
    }
};