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
         v.push_back(root->val);
        solve(root->left,v);
        solve(root->right,v);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v; 
        if(root==NULL)  return v;
       stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode* temp=st.top();
            st.pop();
            v.push_back(temp->val);
            if(temp->right!=NULL)   st.push(temp->right);
            if(temp->left!=NULL)   st.push(temp->left);
        }
        return v;
    }
};