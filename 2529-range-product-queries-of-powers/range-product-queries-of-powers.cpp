class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;

        vector<int> hari;
        int i = 0;

        while (n > 0) {
            if (n % 2 == 1) {
                hari.push_back(1 << i);
            }
            i++;
            n /= 2;
        }

        vector<int> ans;

        for (int i = 0; i < queries.size(); i++) {
            long long prod = 1;

            for (int j = queries[i][0]; j <= queries[i][1]; j++) {
                prod = (prod * hari[j]) % MOD;
            }

            ans.push_back(prod);
        }

        return ans;
    }
};
