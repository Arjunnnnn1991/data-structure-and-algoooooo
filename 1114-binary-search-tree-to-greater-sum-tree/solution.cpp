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
    void makemeG(TreeNode* root,int &now){
        if(root==NULL) return;
        makemeG(root->right,now);
         now+=root->val;
        root->val=now;
        makemeG(root->left,now);
       
       
    }
    TreeNode* bstToGst(TreeNode* root) {
        int now=0;
        makemeG(root,now);
        return root;
    }
};
