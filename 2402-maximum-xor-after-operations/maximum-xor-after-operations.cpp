class Solution {
public:
    int maximumXOR(vector<int>& nums) {
           int sss = 0;
        for(auto num : nums) sss|=num;

        return sss;
    }
};