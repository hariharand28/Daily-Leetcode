class Solution {
public:
    int minimizedMaximum(int n, vector<int>& q) {

        int left=0, right=*max_element(q.begin(), q.end());

        int ans=INT_MAX;

        while(left<=right){
            int mid=left+(right-left)/2;
            int st=0;
            if(mid==0) st=n+1;
            else
                for(int n: q)
                    st+=(n+mid-1)/mid;
            if(st<=n){
                ans=min(ans, mid);
                right=mid-1;
            }else
                left=mid+1;
            }
        return ans;
    }
};