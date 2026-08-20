class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();

        vector<double> pro(n);
        pro[n - 1] = 1;

        for (int i = n - 2; i >= 0; i--) {
            pro[i] = pro[i + 1] * (double)nums[i + 1];
        }

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            if ((double)sum == pro[i])
                return i;
            else
                sum += nums[i];
        }
        
       return -1;
    }
};