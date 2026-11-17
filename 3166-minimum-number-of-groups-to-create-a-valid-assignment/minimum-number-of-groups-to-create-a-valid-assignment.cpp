
class Solution {
public:
    int minGroupsForValidAssignment(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        int minFreq = INT_MAX;

        for (auto& [num, count] : freq) {
            minFreq = min(minFreq, count);
        }

        for (int k = minFreq; k >= 1; k--) {
            int groups = 0;
            bool valid = true;

            for (auto& [num, count] : freq) {
                int g = (count + k) / (k + 1);

                if (g * k > count) {
                    valid = false;
                    break;
                }

                groups += g;
            }

            if (valid) {
                return groups;
            }
        }

        return nums.size();
    }
};
