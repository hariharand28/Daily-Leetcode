class Solution {
    class DSU{
    vector<int> par;
    vector<int> rank;

    public:

    DSU(int n){
        par.resize(n);
        rank.resize(n,0);

        for(int i=0; i<n; i++){
            par[i]=i;
        }
    }

    int find(int n){
        if(par[n]!=n){
            par[n]=find(par[n]);
        }   
        return par[n];
    }

    void unite(int x, int y){
        int px=find(x);
        int py=find(y);

        if(px==py) return;

        else if(rank[px]>rank[py])
            par[py]=px;
        else if(rank[py]>rank[px])
            par[px]=py;
        else{
            par[py]=px;
            rank[px]++;
            }
    }
};
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
            DSU dsu(n);
            
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(isConnected[i][j]){
                    dsu.unite(i,j);
                }
            }
        }
        int ans=0;
        for(int i=0; i<n; i++)

            if(dsu.find(i)==i)
                ans++;

                return ans;
    }
};