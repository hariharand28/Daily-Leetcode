class Solution {
public:
int n,m;
    
    long long  sol(vector<vector<int>>& g, int i, int j){
        if(i<0 || i>=n || j<0 || j>=m)
            return 0;
        else if(g[i][j]==0)
            return 0;
        
            int tem=g[i][j];
            g[i][j]=0;
            return (long long )tem + sol(g, i+1, j) + sol(g, i, j+1) + sol(g, i-1, j) + sol(g, i, j-1);
        
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        n=grid.size(), m=grid[0].size();
        int ans=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(grid[i][j]>0){
                    long long  ss=sol(grid, i,j);
                        if(ss%k==0)
                            ans++;}
        return ans;
        
    }
};