class Solution {
public:
    int totalFruit(vector<int>& fru) {

        unordered_map<int,int> mpp;
        int agmark=0, gethu=INT_MIN;

        for(int i=0; i<fru.size(); i++){
            mpp[fru[i]]++;

            while(mpp.size()>2){
                mpp[fru[agmark]]--;

                if(mpp[fru[agmark]]==0)
                    mpp.erase(fru[agmark]);
                agmark++;
            }

            gethu=max(gethu, i-agmark+1);
        }

        return gethu;
        
    }
};