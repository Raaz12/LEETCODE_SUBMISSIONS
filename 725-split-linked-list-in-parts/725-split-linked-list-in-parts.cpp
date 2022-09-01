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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        vector<ListNode*> v;
        
        ListNode* temp=head;
        
        
        int n=0;
        while(temp)
        {
            n++;
            
            temp=temp->next;
            
        }
        temp=head;
        
        int div=n/k;
        
        int rem=n%k;
        
        int k1;
        
        for(int i=0;i<k;i++)
        {
            ListNode* temp1=new ListNode(NULL);
        
            ListNode* temp2=temp1;
            
            if(rem>0) k1=div+1;
            
            else k1=div;
            
                while(k1-- and temp)
                {
                    temp2->next=new ListNode(temp->val);
                    temp2=temp2->next;
                    temp=temp->next;
                }
            v.push_back(temp1->next);
            rem--;
            
            
        }
        return v;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};