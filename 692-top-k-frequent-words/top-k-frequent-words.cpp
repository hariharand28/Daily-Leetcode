class Solution {
public:

    static bool cmp(pair<int,string>& a, pair<int,string>& b){
        if(a.first!=b.first)
            return a.first>b.first;
        return a.second < b.second ;
        
    }
    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string,int> mpp;

        for(string s: words){
            mpp[s]++;
        }

        vector<pair<int,string>> vec;

        for(auto& it: mpp){
            vec.push_back(pair<int,string>{it.second,it.first});
        }

        sort(vec.begin(), vec.end(), cmp);
        
        vector<string> ans;

        for(int i=0; i<k; i++){
            ans.push_back(vec[i].second);
        }

        return ans;
        
    }
};