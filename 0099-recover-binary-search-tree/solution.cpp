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
void inor(vector<TreeNode*> &ino,TreeNode*root)
{
    if(root==NULL) return;
    inor(ino,root->left);
    ino.push_back(root);
    inor(ino,root->right);
    return;
}
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> arr;
        inor(arr,root);
        int i=0,j=arr.size()-1;
        while(i<j){
           if(arr[i]->val<arr[i+1]->val) i++;
           else if(arr[j]->val>arr[j-1]->val) j--;
           else swap(arr[i]->val,arr[j]->val);
        }
        return;
    }
};
