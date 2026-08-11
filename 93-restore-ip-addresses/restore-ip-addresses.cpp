class Solution {
public:
        vector<string> ans;

    void back(string s, int in, int par, string ss){
        if(par==4 && in==s.size()){
            ss.pop_back();
            ans.push_back(ss);
            return;
        }

        for(int i=1; i<=3 && i+in<=s.size(); i++){
            string sub=s.substr(in, i);

            if(sub.size()>1 && sub[0]=='0')
                break;
            
            if(stoi(sub)>255)
                break;
            
            back(s,in+i, par+1,ss+sub+'.');
        }

    }
    vector<string> restoreIpAddresses(string s) {
        if(s.size()>12) return {};
        back(s,0,0,"");
        return ans;
    }
};