class Solution {
public:
    int minimumOperations(string nums) {

        bool five=false;
        bool zero=false;

        for(int i=nums.size()-1; i>=0; i--){
            char c=nums[i];

            if(five && c=='2') return nums.size()-i-2;
            if(five && c=='7') return nums.size()-2-i;

            if(zero && c=='5') return nums.size()-i-2;
            if(zero && c=='0') return nums.size()-i-2;

            if(c=='0') zero=true;
            if(c=='5') five=true;
        }

        int n=nums.size();

        if(zero) return n-1; 
        return n;
    }
};