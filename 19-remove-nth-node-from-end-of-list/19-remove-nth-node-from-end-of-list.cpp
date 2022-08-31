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
        int i=-1,m=0,ans=-1;
        if(head==NULL or head->next==NULL)  return NULL;
        while(temp)
        {
            i++;
            temp=temp->next;
        }
        temp=head;
        if(i+1==n)  return head->next;
        while(temp)
        {
            if(i==n)
            {
                temp->next=temp->next->next;
                break;
            }
            i--;;
            temp=temp->next;
        }
        return head;
    }
};