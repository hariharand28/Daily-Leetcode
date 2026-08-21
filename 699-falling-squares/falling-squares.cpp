class Solution {
public:
    vector<int> fallingSquares(vector<vector<int>>& pos) {
        vector<vector<int>> posi;
        vector<int> ans;
        int maximum = 0;
        
        for(auto row : pos) {
            int left = row[0];
            int side = row[1];
            int right = left + side;
            int maxi = 0;
            
            for(auto r: posi){
                int prevl=r[0];
                int prevr=r[1];
                int hei=r[2];

                if(left<prevr && right>prevl){
                    maxi=max(maxi, hei);
                }

            }
          
             maxi+=side;
            posi.push_back({left, right, maxi});
            maximum = max(maximum, maxi);
            ans.push_back(maximum);
        }
        
        return ans;
    }
};