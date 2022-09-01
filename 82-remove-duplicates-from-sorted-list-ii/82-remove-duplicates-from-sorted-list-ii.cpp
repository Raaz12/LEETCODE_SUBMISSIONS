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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* temp1=new ListNode(NULL);
        ListNode* temp2=temp1;
        vector<int>v;
        map<int,int>mp;
        while(temp)
        {
            mp[temp->val]++;
            temp=temp->next;
        }
        for(auto val : mp)
        {
            if(val.second>1) continue;
            temp2->next=new ListNode(val.first);
            temp2=temp2->next;
        }
       return temp1->next;
    }
};