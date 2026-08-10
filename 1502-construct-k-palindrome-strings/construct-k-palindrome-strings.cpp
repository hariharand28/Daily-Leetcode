class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k)
            return false;

        unordered_map<char,int> mpp;

        for(char c: s){
            mpp[c]++;
        }

        int odd=0;

        for(auto& [one, two]: mpp){
            if(two%2==1)
                odd++;
        }

        return odd<=k;
        
    }
};