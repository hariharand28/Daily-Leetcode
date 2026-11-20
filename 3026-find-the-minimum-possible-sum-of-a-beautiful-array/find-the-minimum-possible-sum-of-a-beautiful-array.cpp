
class Solution {
public:
    int minimumPossibleSum(int n, int target) {
        long long MOD = 1e9 + 7;

        long long x = min(n, target / 2);
        long long y = n - x;

        long long ans = (x * (x + 1)) / 2;

        long long start = target;
        long long end = target + y - 1;

        ans += (y * (start + end)) / 2;

        return ans % MOD;
    }
};
