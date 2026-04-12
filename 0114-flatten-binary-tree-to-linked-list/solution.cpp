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
    // void giveme(vector<TreeNode*>&arr,TreeNode* root){
    //     if(root==NULL) return;
    //     arr.push_back(root);
    //     giveme(arr,root->left);
    //     giveme(arr,root->right);
    //     return;
    // }
//     int main
    //     if(root==NULL) return;
    // vector<TreeNode*> arr;
    // giveme(arr,root);
    
    
   
    // for(int i=0;i<arr.size();i++){
    //     if(i==arr.size()-1){
    //         arr[i]->right=NULL;
    //         arr[i]->left=NULL;
    //         break;
    //     }
    //     arr[i]->right=arr[i+1];
    //     arr[i]->left=NULL;
    // }
    // return 
    TreeNode* pre=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        flatten(root->right);
        flatten(root->left);
        root->left=NULL;
        root->right=pre;
        pre=root;
        return;
    }
};
