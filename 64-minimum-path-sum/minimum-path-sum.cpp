class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>d=grid;
        for(int i=1; i<n; i++)
            d[i][0]=d[i-1][0]+d[i][0];
        for(int i=1; i<m; i++)
            d[0][i]=d[0][i]+d[0][i-1];
        for(int i=1; i<n; i++)
            for(int j=1; j<m; j++)
                d[i][j]=grid[i][j]+min(d[i-1][j], d[i][j-1]);

        return d[n-1][m-1];
    }
};