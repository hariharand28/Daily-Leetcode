class Solution {
public:
    long long minimumTime(vector<int>& t, int tot) {

        long long left=1, right=*max_element(t.begin(), t.end())*((tot+t.size()-1)/t.size());

        long long ans=right;

        while(left<=right){
            long long mid=left+(right-left)/2;

            long long  trip=0;

            for(int n: t){
                trip+=(mid/n);
            }

            if(trip>=tot){
                ans=mid;
                right=mid-1;
            }
            else
                left=mid+1;
        }

        return ans;
        
    }
};