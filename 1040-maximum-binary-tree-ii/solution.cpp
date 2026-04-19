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
    //  TreeNode* maker(vector<int>& arr,int lo,int hi){
    //     if(lo> hi) return NULL;
    //     int pivot=lo;
    //     for(int i=lo;i<=hi;i++){
    //         if(arr[i]>arr[pivot]){
    //             pivot=i; // working but not space efficent that much
    //         }
    //     }
    //     TreeNode* root=new TreeNode(arr[pivot]);
    //     root->left=maker(arr,lo,pivot-1);
    //     root->right=maker(arr,pivot+1,hi);
    //     return root;
    // }
    // void builder(vector<int>& arr,TreeNode* root){
    //     if(root==NULL) return;
    //     builder(arr,root->left);
    //     arr.push_back(root->val);
    //     builder(arr,root->right);
    //     return;
    // }
    TreeNode* pushtomake(TreeNode* root, int val){
        if(root==NULL) return new TreeNode(val);
        if(root->val<val){
            TreeNode* cur=new TreeNode(val);
            cur->left=root;
            return cur;
        }
        else{
            root->right=pushtomake(root->right,val);
            return root;
        }
    }
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        // vector<int> arr;
        // builder(arr,root);
        // arr.push_back(val);
        // return maker(arr,0,arr.size()-1);
      return  pushtomake(root,val);

    }
};
