class Solution {
public:
    int minChanges(string s) {

        int ez = 0;
        for (int i = 1; i < s.size(); i += 2) {
            if (s[i - 1] != s[i])
                ez++;
        }
        return ez;
    }
};