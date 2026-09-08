class Solution {
public:
    vector<string> ans;

    void back(string s, int open, int backk, int n){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
            }
        
         if (open < n) {
            back(s + "(", open + 1, backk, n);
        }

        if (backk < open) {
            back(s + ")", open, backk + 1, n);
        }

    }

    vector<string> generateParenthesis(int n) {
        if(n==0)
            return ans;
        back("(", 1, 0, n);
        return ans;
        
    }
};