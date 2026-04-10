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
void pusser(TreeNode* root,int n,int k,vector<vector<int>>&ans,int i){
    if(root==NULL) return ;
    
    ans[n].push_back(root->val);
//     if(i%2==1)
//   {   pusser(root->right,n+1,k,ans,i+1);
//     pusser(root->left,n+1,k,ans,i+1);
//   }
//   else{
  
  
     pusser(root->right,n+1,k,ans,i+1);
      pusser(root->left,n+1,k,ans,i+1);
//   }
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int n=0;
        n=counter(root,n);
        vector<vector<int>> ans(n);
        pusser(root,0,n,ans,1);
        for(int i=0;i<ans.size();i+=2){
            if(i%2==0){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;

    }
};
  

