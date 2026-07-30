class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int cnt=1;
        int ans=0;

        while(n>=8){
            ans+=(cnt*8);
            n-=8;
            cnt++;
        }

        ans+=(n*cnt);

        return ans;
        
    }
};