class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {

        unordered_set<int> st;
        int cnt=0;
        st.insert(0);
        long long sum=0;

        for(int n: nums){
            sum+=n;
            if(st.count(sum-target)){
                cnt++;
                st.clear();
                st.insert(0);
                sum=0;
            }
            else{
                st.insert(sum);
            }

        }   

        return cnt;     
    }
};