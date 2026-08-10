class Solution {
public:
    int minOperations(vector<int>& nums) {

        unordered_map<int, int> mpp;

        for (int num : nums)
            mpp[num]++;
        int ans =0;
        for (auto& [num, freq] : mpp) {
            if (freq == 1)
                return -1;
            else
                ans += (freq + 2) / 3;
        }

        return ans;
    }
};