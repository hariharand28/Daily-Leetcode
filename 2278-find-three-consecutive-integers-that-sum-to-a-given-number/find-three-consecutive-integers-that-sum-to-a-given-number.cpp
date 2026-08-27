class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long e=num/3;
        if((long long)e*3==num){
            return {e-1,e,e+1};
        }
        else
            return {};
        
    }
};