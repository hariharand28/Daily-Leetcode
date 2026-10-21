class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)
            return NULL;
        
        ListNode* tail=head;

        for(int i=0; i<k; i++){
            if(!tail)
                return head;
            tail=tail->next;
        }
        ListNode* newh=revv(head, tail);
        head->next= reverseKGroup(tail, k);
        return newh;
        
    }

private:
    ListNode* revv(ListNode* st, ListNode* end){
        ListNode* prev= NULL;

        while(st!=end){
            ListNode* n=st->next;
            st->next=prev;
            prev=st;
            st=n;
        }
        return prev;
    }
};