class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(),
        [](vector<int>& a, vector<int>&b){
            if(a[0]==b[0])
                return a[1]>b[1];
            return a[0]<b[0];
        } );
        int agmark=0;
        int max=-1;
        for(auto &gethu: intervals){
            if(gethu[1]>max){
                agmark++;
                max=gethu[1];
            }
        }

        return agmark;
        
    }
};