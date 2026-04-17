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
void getsum(TreeNode*root, int &lo,int &hi,int & ans){
    if(root==NULL) return;
    if(root->val>hi){
        getsum(root->left,lo,hi,ans);
    }
    else if(root->val<lo){
        getsum(root->right,lo,hi,ans);
    }
    else{
        ans+=root->val;
         getsum(root->left,lo,hi,ans);
          getsum(root->right,lo,hi,ans);
        
    }
    return;
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        getsum(root,low,high,ans);
        return ans;
    }
};
