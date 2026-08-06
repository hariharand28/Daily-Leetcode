class Solution {
public:

    int find(int x, vector<int>& par){
        if(par[x]!=x){
            par[x]=find(par[x], par);
        }

        return par[x];
    }

    void unite(int x,int y, vector<int>& par, vector<int>& rank){
        int px=find(x, par);
        int py=find(y, par);

        if(px==py) return;

        int rx=rank[px];
        int ry=rank[py];

        if(rx<ry){
            par[px]=py;
        } else if(ry<rx){
            par[py]=px;
        } else{
            par[py]=px;
            rank[px]++;
        }
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        int n=edges.size();

        vector<int> par(n+1);
        vector<int> rank(n+1,0);

        for(int i=0; i<=n; i++){
            par[i]=i;
        }

        for(auto row: edges){
            if(find(row[0], par)==find(row[1],par))
                return row;
            unite(row[0], row[1], par, rank);
        }

        return {0,0};
        
    }
};