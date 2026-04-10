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
void pusser(TreeNode* root,int n,int k,vector<vector<int>>&ans){
    if(root==NULL) return ;
    
    ans[n].push_back(root->val);
   
   if(root->left) pusser(root->left,n+1,k,ans);
  if(root->right)  pusser(root->right,n+1,k,ans);
    return;

}
    int counter(TreeNode*root,int &k){
        if(root==NULL) return 0;
        int j=counter(root->left,k);
        int i=counter(root->right,k);
        int w=max(i,j);
       k= max(k,1+w);
       return 1+w;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=0;
        n=counter(root,n);
        vector<vector<int>> ans(n);
        pusser(root,0,n,ans);
        return ans;

    }
};
