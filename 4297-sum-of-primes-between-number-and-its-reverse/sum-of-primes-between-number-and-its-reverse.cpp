class Solution {
public:
    int revv(int n){
        int rev=0;
        while(n>0){
            int d=n%10;
            rev=(rev*10)+d;
            n/=10;
        }
        return rev;
    }

    bool isprime(int n){
        if(n<2)
            return false;
        
        for(int i=2; i*i<=n; i++)
            if(n%i==0) return false; return true;
    }

    int sumOfPrimesInRange(int n) {
        int rev=revv(n);

        int ll=min(n,rev), hh=max(n,rev);
        int sum=0;
        for(int i=ll; i<=hh; i++){
            if(isprime(i)){
                sum+=i;
            }
        }
        return sum;
    }
};