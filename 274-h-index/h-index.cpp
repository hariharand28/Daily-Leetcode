class Solution {
public:
    int hIndex(vector<int>& cit) {
         int n=cit.size();
        int l=0, r=n-1;
        sort(cit.begin(), cit.end());

        while(l<=r){
            int mid=(l+r)/2;
            int cnt=n-mid;

            if(cit[mid]==cnt)
                return cnt;
            else if (cit[mid]<cnt)
                l=mid+1;
            else
                r=mid-1;
        }

        return n-l;
        
    }
};