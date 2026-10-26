class Solution {
public:
    int sol(vector<vector<int>>& grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()||grid[i][j]==0)
            return 0;
        int temp=grid[i][j];
        grid[i][j]=0;
        return temp+sol(grid,i+1, j)+sol(grid, i-1,j)+sol(grid,i,j-1)+sol(grid,i,j+1);
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0; i<grid.size(); i++)
            for(int j=0; j<grid[0].size(); j++)
                if(grid[i][j]>0)
                    ans=max(ans, sol(grid,i,j));
        return ans;
    }
};