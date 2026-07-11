class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {

        sort(clips.begin(), clips.end());

        int cend=0;
        int nend=0;
        int i=0, n=clips.size();
        int cnt=0;

        while(cend<time){
            while(i<n && clips[i][0]<=cend){
                nend=max(nend, clips[i][1]);
                i++;
            }

            if(nend==cend)
                return -1;

                cnt++;
                cend=nend;
        }     

        return cnt;
    }
};