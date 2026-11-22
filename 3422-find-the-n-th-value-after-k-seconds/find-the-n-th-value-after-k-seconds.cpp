class Solution {
public:
const long long mod = 1e9 + 7;
    long long valueAfterKSeconds(long long n, long long k) {
        vector<long long> v(n,1);
        while(k--){
            long long res = 0;
            for(int i = 0 ; i < n ; i++){
                res = (res + v[i])%mod;
                v[i] = res;
            }
        }
        return v.back();
    }
};