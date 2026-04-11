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
     void showme(TreeNode* root,int cur,int & maxi ,vector<int> & ans){
        if(root==NULL) return;
        if(cur>maxi)ans.push_back(root->val);
        maxi=max(cur,maxi);
        cur=cur+1;
        showme(root->right,cur,maxi,ans);
        showme(root->left,cur,maxi,ans);
        return;
     }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int cur=0,maxi=-1;
        showme(root,cur,maxi,ans);
        return ans;
    }
};
