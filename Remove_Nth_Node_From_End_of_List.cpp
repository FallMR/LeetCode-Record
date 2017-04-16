class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode** p1 = &head, *p2 = head;
        
        for(int i = 1; i < n; i++)
            p2 = p2->next;
        
        while(p2->next != NULL)
        {
            p1 = &((*p1)->next);
            p2 = p2->next;
        }
        *p1 = (*p1)->next;

        return head;
    }
};