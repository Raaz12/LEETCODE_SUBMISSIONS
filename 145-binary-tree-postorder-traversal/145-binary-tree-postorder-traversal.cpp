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
     void solve(TreeNode* root, vector<int>&v)
    {
        if(root==NULL)  return;
        solve(root->left,v);
        solve(root->right,v);
        v.push_back(root->val);
    }
    
    
    
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        if(root==nullptr)   return v;
        stack<TreeNode*>st1,st2;
        st1.push(root);
        
        
        while(!st1.empty())
        {
            root=st1.top();
            st1.pop();
           v.push_back(root->val);
            if(root->left!=NULL)    st1.push(root->left);
            if(root->right!=nullptr)    st1.push(root->right);
        }
        reverse(v.begin(),v.end());
        
        // while(!st2.empty())
        // {
        //     root=st2.top();
        //     st2.pop();
        //     v.push_back(root->val);
        // }
        return v;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};