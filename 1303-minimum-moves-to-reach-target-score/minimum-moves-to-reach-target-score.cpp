class Solution {
public:
    int minMoves(int target, int maxi) {

        int ans=0;

        while(maxi>0 && target>1){
            if(target%2==0){
                target/=2;
                maxi--;
                }
            else{
                target--;
            }
            ans++;
        }

        return ans+target-1;
        
    }
};