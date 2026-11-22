class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        stones.push_back(0);
        sort(stones.begin(), stones.end());
        while(stones.size()>1){
            int l1=stones.back();
            stones.pop_back();
            int l2=stones.back();
            stones.pop_back();

            if(l1!=l2){
                stones.push_back(l1-l2);
            }

            sort(stones.begin(), stones.end());
        }

        return stones[0];
        
    }
};