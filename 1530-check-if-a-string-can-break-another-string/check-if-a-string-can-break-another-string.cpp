class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
                sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool ch1=true;
        bool ch2=true;
        for(int i=0;i<s1.length();i++){
            if(s1[i]<s2[i]){
                    ch1=false;
            }
            if(s1[i]>s2[i]){
                ch2=false;
            }
        }
        return ch1||ch2;
        
    }
};