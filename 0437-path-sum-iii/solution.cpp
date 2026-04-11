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
 void pushme(long long target,TreeNode* root,int &ans){
        if(root==NULL) return;
        target-=(long long)root->val;
        if(target==0) ans++;
       
        if(root->right) pushme(target,root->right,ans);
        if(root->left) pushme(target,root->left,ans);
        return ;
       
    }
    void happyme(TreeNode* root,int &ans,long long target){
        if(!root) return;
       pushme(target,root,ans);
       happyme(root->left,ans,target);
       happyme(root->right,ans,target);
       return;
    }
    int pathSum(TreeNode* root, long long targetSum) {
        int ans=0;
        happyme(root,ans,targetSum);
        return ans;
    }
};
