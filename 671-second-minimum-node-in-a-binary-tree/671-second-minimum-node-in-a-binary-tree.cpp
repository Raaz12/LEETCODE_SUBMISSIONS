/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   
    
    void solve(TreeNode* root,map<int,int>&mp)
    {
        if(root==nullptr) return;
        
        solve(root->left,mp);
        
        mp[root->val]++;
        
        solve(root->right,mp);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        map<int,int>v;
       
        solve(root,v);
        int i=0;
        int ans=-1;
        for(auto val:v)
        {
            
            i++;
            if(i==2)
            {
                ans=val.first;
            }
        }
        
        
        return ans;
    }
};