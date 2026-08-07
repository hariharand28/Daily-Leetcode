class Solution {
public:
    int hel(int st, int tar){
        if(st>=tar)
            return st-tar;
        if(tar%2==1)
            return 1+hel(st, tar+1);
        return 1+hel(st,tar/2);
    }
    int brokenCalc(int startValue, int target) {

        return hel(startValue, target);
        
    }
};