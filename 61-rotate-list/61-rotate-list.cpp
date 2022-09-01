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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* temp=head;
        ListNode* temp1=new ListNode(NULL);
        ListNode* temp2=temp1;
        vector<int>v;
        
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        
        int n=v.size();
        if(k==0 or n==0)    return head;
        k=k%n;
        for(int i=0;i<k;i++)
        {
            int flag=v[n-1];
            for(int j=n-1;j>0;j--)
            {
                v[j]=v[j-1];
            }
            v[0]=flag;
        }
        for(int i=0;i<v.size();i++)
        {
            temp2->next=new ListNode(v[i]);
            temp2=temp2->next;
        }
        return temp1->next;
    }
};