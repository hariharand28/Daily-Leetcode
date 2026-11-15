class Solution {
public:
    string frequencySort(string s) {

        int n=s.size();

        vector<int> mpp(128,0);

        for(char c: s)
            mpp[c]++;

        string ans=s;

        sort(ans.begin(), ans.end(), [&](char a, char b){
            return mpp[a]> mpp[b] ||(mpp[a]==mpp[b] && a>b);
        });

        return ans;
        
    }
};

