class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veg, int maxPrice, int maxDistance) {


        vector<vector<int>> temp;

        for (auto &row : restaurants) {

            if (veg == 1 && row[2] == 0)
                continue;

            if (row[3] > maxPrice)
                continue;

            if (row[4] > maxDistance)
                continue;

            temp.push_back(row);
        }

        sort(temp.begin(), temp.end(), [](vector<int> &a, vector<int> &b) {

            if (a[1] != b[1])
                return a[1] > b[1];

            return a[0] > b[0];
        });

        vector<int> ans;

        for (auto &row : temp)
            ans.push_back(row[0]);

        return ans;
        
    }
};