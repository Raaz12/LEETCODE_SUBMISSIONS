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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
         vector<int>v;
        
        int k=lists.size();
           
           for(int i=0;i<k;i++)
           {
               
               while(lists[i])
               {
                   
                   v.push_back(lists[i]->val);
                   
                   
                   lists[i]=lists[i]->next;
                   
               }
           }
           sort(v.begin(),v.end());
           
           
           ListNode* temp=new ListNode(NULL);
           
           
           ListNode* temp1=temp;
           
           
           for(int i=0;i<v.size();i++)
           {
               
               temp->next=new ListNode(v[i]);
               
               
               temp=temp->next;
               
               
           }
           
           return temp1->next;
    }
};