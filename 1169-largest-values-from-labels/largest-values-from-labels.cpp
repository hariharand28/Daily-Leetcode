class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n=values.size();

        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(values[j+1]>values[j]){
                    swap(values[j+1], values[j]);
                    swap(labels[j+1], labels[j]);
                }
            }
        }

        int i=0;
        int sum=0;
        unordered_map<int,int> mpp;
        while(numWanted && i<n){
            if(mpp[labels[i]]<useLimit){
                sum+=values[i];
                mpp[labels[i]]++;
                numWanted--;
            }
            i++;

        }

        return sum;
        
    }
};