class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n,n1=0,n2=1;

        while(num>0)
        {
            n1=n1+(num%10);
            n2=n2*(num%10);
            num/=10;
        }

        int sum=n1+n2;

        if(n%sum==0) {return true;}
        
        return false;
    }
};