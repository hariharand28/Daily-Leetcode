class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {

        unordered_map<int, int> mpp;

        for (int num : banned)
            mpp[num]++;
        int sum = 0;
        int num = 0;
        for (int i = 1; i <= n; i++) {
            if (sum + i <= maxSum) {
                if (mpp[i] <= 0){
                    sum += i;
                num++;}
            } else
                break;
        }

        return num;
    }
};