class Solution {
public:

    void d(int e, vector<bool>& sys, const vector<vector<int>>& arr){
        sys[e]=true;
        
            for(int n: arr[e])
                if(!sys[n])
                    d(n, sys, arr);
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invo) {

        vector<vector<int>> arr(n);

        for(auto row: invo){
            arr[row[0]].push_back(row[1]);
        }

        vector<bool> sus(n, false);

        d(k, sus, arr );

        vector<int> ans;

        for(auto row: invo){
            if(!sus[row[0]]&& sus[row[1]]){
                for(int i=0; i<n; i++){
                    ans.push_back(i);
                }

                return ans;
            }
        }

        for(int i=0; i<n; i++){
            if(!sus[i])
                ans.push_back(i);
        }

        return ans;
        
    }
};