class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long left=1;
        long long right=*max_element(candies.begin(), candies.end());

        int res=0;

        while(left<=right){
            int mid=left+(right-left)/2;

            long long  kk=0;

            for(int n: candies)
                kk+=(n/mid);

            if(kk>=k){
                res=max(res, mid);
                left=mid+1;
            } else{
                right=mid-1;
            }
        }

        return res;
    }
};