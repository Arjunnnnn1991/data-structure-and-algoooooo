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
     TreeNode* maketree(vector<int> &arr,int lo,int hi){
        if(lo>hi) return NULL;
     TreeNode* root=new TreeNode(arr[lo]);
     int pivot=lo;
     for(int i=lo+1;i<=hi;i++){
        if(arr[i]>arr[lo]) break;
        pivot++;
     }
     root->left=maketree(arr,lo+1,pivot);
     root->right=maketree(arr,pivot+1,hi);
     return root;}
    TreeNode* bstFromPreorder(vector<int>& arr) {
        return maketree(arr,0,arr.size()-1);
    }
};
