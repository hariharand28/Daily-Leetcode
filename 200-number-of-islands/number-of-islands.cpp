class Solution {
public:
int n,m;
    void sol(vector<vector<char>>& g, int i, int j){
        if(i<0 || i>=n || j<0 || j>=m)
            return;

        else if (g[i][j]=='0')
            return;
        
        g[i][j]='0';
        sol(g, i+1, j);
        sol(g, i-1, j);
        sol(g, i, j+1);
        sol(g, i, j-1);
    }

    int numIslands(vector<vector<char>>& grid) {
        n=grid.size(), m=grid[0].size();
        int ans=0;
        for(int i=0;i<n; i++)
            for(int j=0; j<m; j++)
                if(grid[i][j]=='1'){
                    sol(grid, i, j);
                    ans++;}
        
        return ans;
    }
};