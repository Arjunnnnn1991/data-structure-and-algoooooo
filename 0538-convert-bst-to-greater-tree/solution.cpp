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
    void maker(TreeNode* root,int& now){
        if(root==NULL) return;
        maker(root->right,now);
        now+=root->val;
        root->val=now;
        maker(root->left,now);
        return;
    }
    TreeNode* convertBST(TreeNode* root) {
        int now=0;
        maker(root,now);
        return root;
    }
};
