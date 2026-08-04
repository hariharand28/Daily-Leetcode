class Solution {
public:

    bool isvowel(char c){
        switch(c){
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                return true;
            default:
                return false;
        }
    }
    string sortVowels(string s) {

        vector<char> vow;

        for(char c: s){
            if(isvowel(c))
                vow.push_back(c);
        }

        sort(vow.begin(), vow.end());

        int index=0;

        for(int i=0; i<s.size(); i++){
            if(isvowel(s[i]))
                s[i]=vow[index++];
        }

        return s;
        
    }
};