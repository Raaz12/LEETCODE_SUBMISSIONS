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
// class node {
//     public:
//     int data;
//     node * next;
//     node (int val)
//     {
//         this data = val;
//         this next=NULL;
//     }
// };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* temp=head;
        
        if(head==NULL)  return head;
        // set<int>v;
        
        while(temp!=NULL)
        {
            
            if(temp->next!=NULL and temp->val==temp->next->val)
            {
                ListNode*  next_next=temp->next->next;
                
                ListNode* deletenode=temp->next;
                
                delete (deletenode);
                
                temp->next=next_next;
                
            }
            else
            {
                temp=temp->next;
            }
//             v.insert(temp->val);
//             temp=temp->next;
            
            
        }
//         int n=v.size();
//         for(auto data:v)
//         {
//             node * newnode= new node(data);
            
//         }
        return head;
        
    }
};