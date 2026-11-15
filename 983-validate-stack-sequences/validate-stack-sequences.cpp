class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        int i=0;

        stack<int> st;

        for(int num: pushed){
            st.push(num);
            while(!st.empty() && st.top()==popped[i]){
                st.pop();
                i++;
            }

        }
        return st.empty();
    }
};