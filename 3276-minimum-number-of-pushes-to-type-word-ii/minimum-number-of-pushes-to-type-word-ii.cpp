class Solution {
public:
    int minimumPushes(string word) {

        if(word.size()<7) {return word.size();}

        map<char, int> remap;
        int chara =0;

        vector <int> answer;

        for(int i=0; i<word.size(); i++)
        {
            if (remap[word[i]]==0) {
                chara++;
                remap[word[i]]=1;
            }

            else remap[word[i]]++;
        }
        
        for( auto const& [ch, count] : remap)
        {
            answer.push_back(count);
        }

        sort(answer.begin(), answer.end());
        reverse(answer.begin(), answer.end());
        int sum=0;

        for(int i=0; i<answer.size(); i++)
        {
            if(i<=7){
                sum+=answer[i];
            }

            else if(i<=15) {
                sum+=(2*answer[i]);
            }
            else if(i<=23) {
                sum+=(3*answer[i]);
            }
            else{
                sum+=(4*answer[i]);
            }
        }
        

        return sum;
        
    }
};