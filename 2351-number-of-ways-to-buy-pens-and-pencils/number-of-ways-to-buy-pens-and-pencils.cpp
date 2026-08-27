class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
       
        long long ans = 0;

        for (int s = 0; s <= total; s += cost1) {
            ans += (total - s) / cost2 + 1;
        }

        return ans;
        
    }
};