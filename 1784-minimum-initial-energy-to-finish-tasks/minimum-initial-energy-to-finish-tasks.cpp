class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {

        sort(tasks.begin(), tasks.end(), [](const vector<int>a, const vector<int>b){
                return (a[1]-a[0])>(b[1]-b[0]);
        });

        int ans=0;
        int mu=0;
        for(auto row: tasks){
            ans=max(ans, mu+row[1]);
            mu+=row[0];
        }
        return ans;


        
    }
};