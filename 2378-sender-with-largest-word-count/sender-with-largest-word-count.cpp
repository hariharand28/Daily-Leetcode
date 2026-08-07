class Solution {
public:
    string largestWordCount(vector<string>& messages,
                            vector<string>& senders) {

        unordered_map<string,int> mpp;

        for (int i = 0; i < messages.size(); i++) {
            int cnt = 1;
            for (char c : messages[i])
                if (c == ' ') cnt++;

            mpp[senders[i]] += cnt;
        }

        string ans = "";
        int mx = -1;

        for (auto &it : mpp) {
            if (it.second > mx ||
                (it.second == mx && it.first > ans)) {
                mx = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};