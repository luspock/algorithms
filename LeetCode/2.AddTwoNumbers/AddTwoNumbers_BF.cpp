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
        int carry = 0;
        int sum = 0;
        ListNode *results = new ListNode(0);
        ListNode *results_head = results;
        while(1){
            sum = l1->val + l2->val + carry;
            carry = sum/10;
            results->val = sum%10;
            if(l1->next == NULL && l2->next == NULL)
                break;
            else{
                if(l1->next != NULL)
                    l1 = l1->next;
                else{
                    l1->next = new ListNode(0);
                    l1 = l1->next;
                }
                if(l2->next != NULL)
                    l2 = l2->next;
                else{
                    l2->next = new ListNode(0);
                    l2 = l2->next;                
                }
                results->next = new ListNode(0);
                results = results->next;
            }
        }
        if(carry!=0){
            results->next = new ListNode(0);
            results = results->next;
            results->val = carry;
        }
        return results_head;
    }
};