class Solution {
public:
    void muthu(int l, int k, int n,int sum, vector<int>& nums, vector<vector<int>>& gethu){
        if(k==0 && sum==n)
            gethu.push_back(nums);
        else if(sum>n)
            return;

        for(int i=l; i<10; i++){
            nums.push_back(i);
            muthu(i+1, k-1, n, sum+i, nums, gethu);
            nums.pop_back();
        }

    }

    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>>gethu;
        vector<int>nums;

        muthu(1, k, n,0, nums, gethu);

        return gethu;
        
    }
};