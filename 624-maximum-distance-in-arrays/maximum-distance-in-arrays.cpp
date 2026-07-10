class Solution {
public:
    int maxDistance(vector<vector<int>>& array) {
        int noob=array[0][0];
        int pro=array[0].back();
        int maxi=INT_MIN;

        for(int i=1; i<array.size(); i++){
            maxi=max(maxi, abs(noob-array[i].back()));
            maxi=max(maxi, abs(pro-array[i][0]));

            noob=min(noob, array[i][0]);
            pro=max(pro, array[i].back());
        }

        return maxi;
        
    }
};