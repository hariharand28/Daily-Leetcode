class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
       const long long MOD = 1e9 + 7;

        unordered_map<int, long long> mp;

        for (auto &p : points)
            mp[p[1]]++;

        long long ans = 0;
        long long sum = 0;

        for (auto &[y, cnt] : mp) {
            long long pairs = cnt * (cnt - 1) / 2;
            pairs %= MOD;

            ans = (ans + pairs * sum) % MOD;

            sum = (sum + pairs) % MOD;
        }

        return ans;
    }
};