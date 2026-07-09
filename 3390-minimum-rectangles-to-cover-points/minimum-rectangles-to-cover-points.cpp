class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {

        sort(points.begin(), points.end());

        int ans=1, last=points[0][0];

        for(int i=0; i<points.size(); i++){
            if(abs(last-points[i][0])>w)
               { ans++;
                last=points[i][0];}
        }

        return ans;
        
    }
};