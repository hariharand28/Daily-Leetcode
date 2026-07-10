class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& points) {

          sort(points.begin(), points.end(), 
        [](const auto& a, const auto& b ){
            return a[0]<b[0];
        }
        );

        int end=points[0][1];
        int gethu=0;
        for(int i=1; i<points.size(); i++){
            if(points[i][0]>=end){
                end=points[i][1];
            }else{
                gethu++;
                end=min(end, points[i][1]);
            }
        }

        return gethu;
        
        
    }
};