class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {

        unordered_map<string, int> ban;

        for(string s: bannedWords)
            ban[s]++;

        int cnt=0;
        for(string s: message){
            if(ban[s]>0)
                cnt++;
            if(cnt>=2)
                return true;
            }

            return false;
        
    }
};