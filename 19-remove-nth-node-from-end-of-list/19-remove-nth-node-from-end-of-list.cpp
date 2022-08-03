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
        
        ListNode* temp=head;
        if(head->next==NULL or head==NULL)    return NULL;
        int count=-1;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
            
        }
        temp=head;
        if(count+1==n)    return head->next;
        int mount=0;
        while(temp!=NULL)
        {
            mount++;
            
            if(count==n)
            {
                temp->next=temp->next->next;
                // delete temp;
            }
            count--;
            temp=temp->next;
        }
        return head;
    }
};