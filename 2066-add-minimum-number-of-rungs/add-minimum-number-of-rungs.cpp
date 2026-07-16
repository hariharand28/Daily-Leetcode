class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {

        int ans=floor((rungs[0]-1)/dist);
        
        for(int i=1; i<rungs.size(); i++){
            int diff=rungs[i]-rungs[i-1];
            if(diff>dist)
                ans+=floor((diff-1)/dist);
        }

        return ans;
        
    }
};