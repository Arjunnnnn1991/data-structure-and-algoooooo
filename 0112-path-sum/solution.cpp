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
    bool fmao(TreeNode* root,int target,int cur){
        if(root==NULL) return false;
        cur+=root->val;
        if(cur==target&&!root->left&&!root->right) return true;
        else return fmao(root->right,target,cur)||fmao(root->left,target,cur);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
      return fmao(root,targetSum,0);
    }
};
