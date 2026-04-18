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
    void getter(vector<int> &arr,TreeNode* root){
        if(root==NULL) return;
        getter(arr,root->left);
        arr.push_back(root->val);
        getter(arr,root->right);
        return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> val;
        getter(val,root1);
        getter(val,root2);
        sort(val.begin(),val.end());
        return val;
    }
};
