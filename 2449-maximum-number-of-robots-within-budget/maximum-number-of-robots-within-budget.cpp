class Solution {
public:
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {

        int n=chargeTimes.size();

        deque<int> dq;
        long long sum=0;
        int l=0;
        int k=0;

        for(int i=0; i<n; i++){

            while(!dq.empty() && chargeTimes[dq.back()]<=chargeTimes[i] ){
                dq.pop_back();
            }

            dq.push_back(i);

            sum+=runningCosts[i];

            while(!dq.empty() && (long long)chargeTimes[dq.front()]+(long long)(i-l+1)*sum>budget){

                if(dq.front()==l)
                    dq.pop_front();
                
                sum-=runningCosts[l];

                l++;
            }

            k=max(k, i-l+1);
        }
        return k;
    }
};