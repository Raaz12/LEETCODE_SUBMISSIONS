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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* temp1=new ListNode(-1);
        ListNode* temp2=temp1;
        vector<int>v;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin()+left-1,v.begin()+right);
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            temp2->next=new ListNode(v[i]);
            temp2=temp2->next;
        }
        return temp1->next;
            
            
            
            
            
            
            
            
            
            
            
            
            
            
    }
};