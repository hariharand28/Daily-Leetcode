class Solution {
public:
    bool gethu(string& s, int ll, int rr){

        while(ll<rr){
            if(s[ll++]!=s[rr--])
                return false;
        }

        return true;
    }

    bool validPalindrome(string s) {

        int ll=0, rr=s.size()-1;

        while(ll<rr){
            if(s[ll] != s[rr])
                return gethu(s, ll+1, rr) || gethu(s, ll, rr-1);
            ll++;
            rr--;
        }

        return true;
        
    }
};