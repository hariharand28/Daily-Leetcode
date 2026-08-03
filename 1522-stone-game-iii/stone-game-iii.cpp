class Solution {
public:
    string stoneGameIII(vector<int>& stone) {

        int n=stone.size();

        vector<int> dp(n+1, 0);

        for(int i=n-1; i>=0; i--){

            int curr=0;
            dp[i]=INT_MIN;


            for(int j=i; j<min(n, i+3);j++){
                curr+=stone[j];

                dp[i]= max(dp[i], curr-dp[j+1]);
            }
        }

        if(dp[0]>0) return "Alice";
        else if(dp[0]==0) return "Tie";
        else return "Bob";
        
    }
};