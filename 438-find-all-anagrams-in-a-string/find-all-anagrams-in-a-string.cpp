
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), k = p.size();

        vector<int> ans;

        if (k > n) return ans;

        vector<int> freq(26, 0), window(26, 0);

        for (int i = 0; i < k; i++) {
            freq[p[i] - 'a']++;
            window[s[i] - 'a']++;
        }

        if (freq == window)
            ans.push_back(0);

        for (int i = k; i < n; i++) {
            window[s[i] - 'a']++;
            window[s[i - k] - 'a']--;

            if (freq == window)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};
