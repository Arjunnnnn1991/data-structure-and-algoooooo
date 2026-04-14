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
    TreeNode *  makebst(vector<int>&arr,int low,int high){
        if(low>high) return NULL;
        int mid=low+(high-low)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->right=makebst(arr,mid+1,high);
        root->left=makebst(arr,low,mid-1);
        return root;
            }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makebst(nums,0,nums.size()-1 );
    }
};
