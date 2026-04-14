/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
 TreeNode* helper(TreeNode* root,int &x,int &y){
    if(root==NULL) return root;
    if(root->val==x||root->val==y) return root;
    if(root->val>x&&root->val<y) return root;
    else if(root->val>x&&root->val>y) return helper(root->left,x,y);
    else return helper(root->right,x,y);
 }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int x=p->val,y=q->val;
        if(x<y) return lowestCommonAncestor(root,q,p);

        return helper(root,y,x);
    }
};
