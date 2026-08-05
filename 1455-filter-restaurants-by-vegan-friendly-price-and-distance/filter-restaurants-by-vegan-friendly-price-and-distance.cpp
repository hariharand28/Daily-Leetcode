class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veg, int maxPrice, int maxDistance) {

        unordered_map<int, vector<int>> mpp;

        for(auto row: restaurants){
            if(veg==1 && row[2]==0)
                continue;
            if(row[3]>maxPrice)
                continue;
            if(row[4]>maxDistance)
                continue;

                mpp[row[1]].push_back(row[0]);
        }
        vector<int> rat;
        for(auto &it: mpp){
            rat.push_back(it.first);
        }

        sort(rat.begin(), rat.end(), greater<int>());
        vector<int> ans;

        for(int i=0; i<rat.size(); i++){
            sort(mpp[rat[i]].begin(), mpp[rat[i]].end(), greater<int>());

            for(int num: mpp[rat[i]]){
                ans.push_back(num);
            }
        }

        return ans;
        
    }
};