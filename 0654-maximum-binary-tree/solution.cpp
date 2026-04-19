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
    TreeNode* maker(vector<int>& arr,int lo,int hi){
        if(lo> hi) return NULL;
        int pivot=lo;
        for(int i=lo;i<=hi;i++){
            if(arr[i]>arr[pivot]){
                pivot=i;
            }
        }
        TreeNode* root=new TreeNode(arr[pivot]);
        root->left=maker(arr,lo,pivot-1);
        root->right=maker(arr,pivot+1,hi);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return maker(nums,0,nums.size()-1);
    }
};
