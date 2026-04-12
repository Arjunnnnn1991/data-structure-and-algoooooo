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
    int helper(TreeNode* root,int & ans){
        if(root==NULL) return 0;
        int x=helper(root->left,ans);
        int y=helper(root->right,ans);
        ans=max(ans,y+x);
        if(y>x) return 1+y;
        else return 1+x;
    }
    int maxDepth(TreeNode* root) {
         int ans=0;
        ans= helper(root,ans);
         return ans;
    }
};
