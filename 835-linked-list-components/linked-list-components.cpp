/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_map<int,int> mpp;

        for(int num: nums)
            mpp[num]=1;

        ListNode* curr=head;
        string s="";

        while(curr){
            if(mpp[curr->val]==1)
                s+="1";
            else
                s+="0";
            curr=curr->next;
        }
        int ans=0;
        int in=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1' && (i==0 || s[i-1]=='0')){
                ans++;
            }

        }

        return ans;
    }
};