class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        long long ans=0;
        int mini=INT_MAX;
        int neg=0;


        for(auto& row: matrix){
            for(int n: row){
                if(n<0) neg++;
                int a=abs(n);
                ans+=a;

                mini=min(mini, a);
            }
        }

        return (neg%2==0)? ans: ans - 2LL*mini;
        
    }
};