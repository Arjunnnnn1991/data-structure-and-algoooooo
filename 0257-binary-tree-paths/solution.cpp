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
    void help(vector<string>&ans,TreeNode* root,string s){
        if(root==NULL){
            ans.push_back(s);
            return;
        }
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(s+to_string(root->val));
            return;
        }
        if(root->left==NULL){
             help(ans,root->right,s+to_string(root->val)+"->");
             return;
        }
        else if(root->right==NULL){
              help(ans,root->left,s+to_string(root->val)+"->");
              return;
        }
        else
      {  help(ans,root->left,s+to_string(root->val)+"->");
        help(ans,root->right,s+to_string(root->val)+"->");
}
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        help(ans,root,"");
         return ans;
    }
};
