class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
      int odd=INT_MAX;

    sort(nums1.begin(), nums1.end());

        for(int x: nums1){
            if(x%2==1)
                {odd=x;
                break;
        }}
        if(odd==INT_MAX) return true;

        for(int x: nums1){
            if(x%2==0){
                if(x<=odd) return false;
            }
        }

        return true;
        
    }
};