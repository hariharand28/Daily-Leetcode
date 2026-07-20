class Solution {
public:
    int minimumLevels(vector<int>& pos) {

        int n=pos.size();

        vector<int> ll(n);

        int sum=0;

        for(int i=n-1; i>=0; i--){
            if(pos[i]==1)
                sum++;
            else
                sum--;
            
            ll[i]=sum;
        }

        int sc=0;

        for(int i=0; i<n-1; i++){
            if(pos[i]==1)
                sc++;
            else
                sc--;

            if(sc>ll[i+1])
                return i+1;
        }


        return -1;


        
    }
};