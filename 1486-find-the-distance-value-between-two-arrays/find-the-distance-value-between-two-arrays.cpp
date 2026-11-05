class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt=0;

        for(int num: arr1){
            bool t=true;
            for(int n: arr2){
                if(abs(num-n)<=d){
                    t=false;
                    break;
                }
            }
            if(t)
                cnt++;
        }

        return cnt;
    }
};