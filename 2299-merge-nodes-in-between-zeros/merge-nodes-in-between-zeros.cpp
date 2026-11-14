class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {

        ListNode* curr = head->next;
        ListNode* mov = curr;

        while(mov) {
            int sum = 0;

            while(mov && mov->val != 0) {
                sum += mov->val;
                mov = mov->next;
            }

            if(!mov)
                break;

            curr->val = sum;
            curr->next = mov->next;

            curr = curr->next;
            mov = curr;
        }

        return head->next;
    }
};