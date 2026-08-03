class Solution {
public:
    int hari(vector<int>& coins, int rem, vector<int>& n){

        if(rem<0) return -1;
        if(rem==0) return 0;
        if(n[rem]==-1) return -1;
        if(n[rem]!=-2) return n[rem];

        int mini=INT_MAX;


        for(int c: coins){
            int res=hari(coins, rem-c, n);

            if(res>=0 && res<mini){
                mini=1+res;
            }
        }
        
        n[rem]= (mini== INT_MAX)? -1:  mini;
        return n[rem];
    }

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int> nn(amount+1, -2);
        return hari(coins, amount, nn);
    }
};