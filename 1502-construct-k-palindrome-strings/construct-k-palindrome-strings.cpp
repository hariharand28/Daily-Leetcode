class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k)
            return false;

        vector<int> fr(26,0);

        for(char c: s){
            fr[c-'a']++;
        }

        int odd=0;

        for(int i: fr){
            if(i>0 && i%2==1)
                odd++;
        }

        return odd<=k;
        
    }
};