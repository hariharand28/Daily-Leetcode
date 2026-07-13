class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        string n="123456789";
        string l=to_string(low);
        string h=to_string(high);

        int loww=l.size();
        int highh=h.size();

        vector<int> ans;
        
        for(int i=loww; i<=highh; i++){

            for(int j=0; j<=9-i; j++){
                string res =n.substr(j, i);
                int num=stoi(res);

                if(num>=low && num<=high)
                    ans.push_back(num);
            }

        }

        return ans;
    }
};