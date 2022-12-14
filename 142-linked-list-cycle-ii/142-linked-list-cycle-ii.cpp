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
    ListNode *detectCycle(ListNode *head) {
        int i=0;
        ListNode * slow=head,*fast=head;
        ListNode *temp=new ListNode (i);
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            i++;
            if(slow==fast)  
            {
                break;
            }
            
            
            
        }
        if(fast==NULL or fast->next==NULL)    return NULL;
        fast=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};