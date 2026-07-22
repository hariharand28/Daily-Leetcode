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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* curr=head;

        for(int i=0; i<n; i++){
            curr=curr->next;
        }

        ListNode* prev=head;

        if(curr==nullptr){
            curr=head->next;
            delete head;
            return curr;
        }

        while(curr->next){
            curr=curr->next;
            prev=prev->next;
        }

       ListNode* delet = prev->next;

       prev->next=prev->next->next;
       delete  delet;


        return head;
        
    }
};