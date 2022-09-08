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
    void solve(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)  return;
        // solve(root->left,v);
        v.push_back(root->val);
        solve(root->right,v);
    }
    vector<int> rightSideView(TreeNode* root) {
         vector<vector<int>>ans;
        vector<int>w;
        if(root==NULL)  return w;
        
        queue<TreeNode*>q;
        
        q.push(root);
        
        while(!q.empty())
        {
            
            int n=q.size();
            
            vector<int>v;
            
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL)    q.push(node->left);
                if(node->right!=NULL)   q.push(node->right);
                v.push_back(node->val);
            }
            ans.push_back(v);
        }
        int n=ans.size();
        for(int i=0;i<n;i++)
        {
            int m=ans[i].size();
            w.push_back(ans[i][m-1]);
        }
        return w;
    }
};