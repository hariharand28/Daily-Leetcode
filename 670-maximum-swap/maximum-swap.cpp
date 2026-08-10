class Solution {
public:
    int maximumSwap(int num) {

        unordered_map<char, int> mpp;

        string s=to_string(num);

        for(int i=0; i<s.size(); i++){
            mpp[s[i]]=i;
        }

        string ss=s;

        sort(ss.begin(), ss.end(), greater<char>());

        for(int j=0; j<s.size()-1; j++){
            if(s[j]!=ss[j]){
                swap(s[j],s[mpp[ss[j]]]);
                break;
            }
        }

        return stoi(s);
        
    }
};