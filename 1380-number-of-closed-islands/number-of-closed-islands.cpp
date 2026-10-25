class Solution {
public:
int m,n;
    bool cl(vector<vector<int>>& g, int i, int j){
        if(i<0 || i>=m || j<0 || j>=n)
            return false;
        else if(g[i][j])
            return true;
        g[i][j]=1;

        bool a = cl(g, i+1, j);
bool b = cl(g, i-1, j);
bool c = cl(g, i, j+1);
bool d = cl(g, i, j-1);

return a && b && c && d;
    }

    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        m=grid.size(), n=grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!grid[i][j])
                    ans+=cl(grid, i, j);
            }
        }    
        return ans;
    }
};