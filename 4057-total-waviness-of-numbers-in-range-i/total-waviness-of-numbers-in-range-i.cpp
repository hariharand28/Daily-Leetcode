class Solution {
public:
    int hari(int num){
        string s=to_string(num);
        int cnt=0;
        for(int i=1; i<s.size()-1; i++){
            if(s[i-1]<s[i] && s[i+1]<s[i])
                cnt++;
            else if(s[i]<s[i+1] && s[i]<s[i-1])
                cnt++;
        }

        return cnt;
    }

    int totalWaviness(int num1, int num2) {
        int tot=0;
        for(int i=num1; i<=num2; i++){
            tot+=hari(i);
        }

        return tot;

    }
};