class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {

        int z=0,o=0,t=0;

        for(int n: stones){
            if(n%3==0)
                z++;
            else if(n%3==1)
                o++;
            else
                t++;
        }

        if(z%2==0)
            return min(o,t)>0;
        else
            return abs(o-t)>2;
        
    }
};