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
    // int ans=0;
    // int helper(TreeNode* root){
    //     if(root==NULL) return 0;
    //     int dia=finder(root->left)+finder(root->right);
    //     ans=max(ans,dia);
    //     helper(root->left);
    //     helper(root->right);
    //     return ans;

    // }
    // int finder(TreeNode* root){
    //     if(root==NULL) return 0;
    //    int y=finder(root->left);
    //    int k=finder(root->right);
      
    //    return 1+max(y,k);
    // }
   
    //   ans=0;
    //   return helper(root);
    int helper(TreeNode* root,int & ans){
        if(root==NULL) return 0;
        int y=helper(root->left,ans);
        int x=helper(root->right,ans);
        ans=max(ans,y+x);
        return 1+max(x,y);
    }
    int diameterOfBinaryTree(TreeNode* root) {
    int ans=0;  
    int h=helper(root,ans);
    return ans;
    }
};
