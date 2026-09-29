class Solution {
public:
    int candy(vector<int>& ratings) {

        int n=ratings.size();  
        vector<int> choc(n,1);

        for(int i=1; i<n; i++){
            if(ratings[i-1]<ratings[i])
                choc[i]=choc[i-1]+1;
        }

        
        int ans=0;

        for(int i=n-1; i>0; i--){
            if(ratings[i-1]>ratings[i])
                choc[i-1]=max(choc[i]+1, choc[i-1]);

            ans+=choc[i-1];
        }
        return ans+choc[n-1];
    }
};