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
        int i=0,m=0,ans=-1;
        ListNode* newans=new ListNode(-1);
        ListNode* newans1=newans;
        if(n==0)    return head;
        while(temp)
        {
            i++;
            temp=temp->next;
        }
        if(i==1 and n==1)   return NULL;
        n=i-n;
        
        temp=head;
        while(temp)
        {
            if(m!=n)
            {
                newans1->next=new ListNode(temp->val);
                newans1=newans1->next;
            }
            m++;
            temp=temp->next;
        }
        return newans->next;
    }
};