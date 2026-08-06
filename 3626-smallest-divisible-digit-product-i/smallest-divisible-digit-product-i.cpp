class Solution {
public:

    int digitpro(int n){
        int pro=1;

        while(n>0){
            int d=n%10;
            if(d==0) return 0;
            pro*=d;
            n/=10;
        }
        return pro;
    }

    int smallestNumber(int n, int t) {
        bool hari=true;

        while(hari){
            if(digitpro(n)%t==0){
                return n;
            }
            n++;
        }    

        return n;
    }
};