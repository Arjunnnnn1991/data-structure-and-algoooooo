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
    
    int predi(TreeNode* root){
        if(root==NULL) return INT_MAX;
        if(!root->left) return INT_MAX;
        else{
            root=root->left;
            while(root->right){
                root=root->right;
            }
            return root->val;
        }
    }
    int succi(TreeNode* root){
        if(root==NULL) return INT_MAX;
        if(!root->right) return INT_MAX;
        else{
            root=root->right;
            while(root->left){
                root=root->left;
            }
            return root->val;
        }
    }
    void getmin(TreeNode*root,int& mini){
        if(root==NULL) return ;
        int x= succi(root);
        int y=predi(root);
        y=min(abs(root->val-x),abs(root->val-y));
        getmin(root->left,mini);
        getmin(root->right,mini);

        mini=min(mini,y);
        return;

    }
    int getMinimumDifference(TreeNode* root) {
   int mini=INT_MAX;
   getmin(root,mini);
   return mini;
    }
};
