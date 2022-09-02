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
    ListNode* oddEvenList(ListNode* head) {
         ListNode* temp=head;
        ListNode* temp1=new ListNode(NULL);
        ListNode* temp2=temp1;
        int i=1;
        while(temp)
        {
            if(i%2!=0)
            {
                temp2->next=new ListNode(temp->val);
                temp2=temp2->next;
            }
            i++;
            temp=temp->next;
        }
        temp=head;
        i=1;
        while(temp)
        {
            if(i%2==0)
            {
                temp2->next=new ListNode(temp->val);
                temp2=temp2->next;
            }
            i++;
            temp=temp->next;
        }
        return temp1->next;
    }
};