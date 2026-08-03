class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        vector<int> b;
        

        for(string s: bank){
            int curr=0;
            for(char c: s){
                if(c=='1'){
                    curr++;
                }
            }
            b.push_back(curr);
        }
        int c=0;
        int bean=0;

        for(int num: b){
            if(num!=0){
                bean+=(c*num);
                c=num;
            }
        }

        return bean;
        
    }
};