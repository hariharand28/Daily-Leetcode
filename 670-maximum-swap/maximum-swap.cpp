class Solution {
public:
    int great(string& s, int i){
        char g=s[i];
        int index=i;

        for(int j=i+1; j<s.size(); j++){
            if(s[j]>=g){
                g=s[j];
                index=j;
            }
        }
     return index;

    }

    int maximumSwap(int num) {

        string s=to_string(num);

        int i=0;
        int n=s.size();

        while(i<n){
            if(s[i]!='9')
                break;
            else
                i++;
        }

        for(int j=i; j<n-1; j++){
            int gg=great(s,j+1);
            if(s[gg]>s[j]){
                swap(s[gg], s[j]);
                break;
            }
        }

        return stoi(s);

    }
};