class Solution {
public:
    int countCommas(int n) {
        int comma=0;
        int hari=1000;

        while(hari<=n){
            comma+=(n-hari+1);
            if(n<hari*100) break;
            hari*=1000;
        }

        return comma;
        
        
    }
};