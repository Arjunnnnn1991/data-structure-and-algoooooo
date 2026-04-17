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
    void helper(TreeNode* root,int &cur,int& target,int & ans){
        if(root==NULL) return;
        helper(root->left,cur,target,ans);
        cur+=1;
        if(target==cur){
            ans=root->val;
            return;
        }
        helper(root->right,cur,target,ans);
        return;
    }
    
    int kthSmallest(TreeNode* root, int k) {
      int ans=0;
      int cur=0;
      helper(root,cur,k,ans);
        return ans;
    }
};
