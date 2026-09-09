class Solution {
public:
    long long countCommas(long long n) {
        long long comma=0;
        long long hari=1000;

        while(hari<=n){
            comma+=(n-hari+1);
            if(n<hari*1000) break;
            hari*=1000;
        }

        return comma;
        
    }
};