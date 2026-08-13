class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();

        vector<int> minit(n);

        for(int i=0; i<n; i++){
            int hr=stoi(timePoints[i].substr(0,2));
            int minits=stoi(timePoints[i].substr(3,2));
            minit[i]=hr*60+minits;
        }

        sort(minit.begin(), minit.end());

        int mini=INT_MAX;

        for(int i=0; i<n-1; i++){
            mini=min(mini, minit[i+1]-minit[i]);
        }

        mini = min(mini, 1440 - minit.back() + minit.front());

        return mini;
        
    }
};