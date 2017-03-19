/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * result = new ListNode(0);
        ListNode * ret = result;
        ListNode * prev = result;
        int carry= 0;
        while (l1 != NULL || l2 != NULL)
        {
            int val1 = 0, val2 = 0;
            if (l1 != NULL)
            {
                val1 = l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                val2 = l2->val;
                l2 = l2->next;
            }
            result->val = val1 + val2 + carry;
            carry = result->val / 10;
            result->val %= 10;
            result->next = new ListNode(0);
            prev = result;
            result = result->next;
        }
        if (carry)
            result->val = 1;
        else
        {
            delete prev->next;
            prev->next = NULL;
        }
        return ret;
    }
};
