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
    void f(TreeNode* root, int &k , int &sum)
    {
        if(root==NULL or k==0)  return;
        f(root->left,k,sum);
        if(k==0)    return;
        sum=root->val;
        k--;
        f(root->right,k,sum);
    }
    int kthSmallest(TreeNode* root, int k) {
        int sum=0;
        f(root,k,sum);
        return sum;
    }
};