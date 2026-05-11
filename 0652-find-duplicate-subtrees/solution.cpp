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
    string pattern(TreeNode* root,unordered_map<string,int>&m,vector<TreeNode*>& v){
        if(root==NULL) return "#";
        string subt=pattern(root->left,m,v)+','+pattern(root->right,m,v)+','+to_string(root->val);
        m[subt]++;
        if(m[subt]==2) v.push_back(root);
        return subt;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string,int>m;
        vector<TreeNode* >ans;
        pattern(root,m,ans);
        return ans;
    }
};
