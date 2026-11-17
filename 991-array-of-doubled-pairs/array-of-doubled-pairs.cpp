class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {

        sort(arr.begin(), arr.end(), [&](int a, int b){
            return abs(a)<abs(b);
        });

        unordered_map<int, int> mpp;

    for(int x: arr){
        if(mpp[x]==0){
            mpp[2*x]++;
        }
        else{
            mpp[x]--;
        }
    }

    for(const auto&[a, b]: mpp){
        if(b>0)
            return false;
    }

        return true;
        
    }
};