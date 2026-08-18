class Solution {
public:
    vector<int> findOriginalArray(vector<int>& a) {
        if(a.size()<=1) return {};
        sort(a.begin(), a.end());
        
    unordered_map<int,int> mpp;
    
    for(int num: a)
        mpp[num]++;
        
        vector<int> r;
        
        for(int x: a){

            if(mpp[x] == 0)
                continue;

            if(x == 0) {
                if(mpp[0] < 2)
                    return {};

                r.push_back(0);
                mpp[0] -= 2;
            }
            else {
                if(mpp[2*x] == 0)
                    return {};

                r.push_back(x);
                mpp[x]--;
                mpp[2*x]--;
            }
        }
        return r;
        
    }
};
