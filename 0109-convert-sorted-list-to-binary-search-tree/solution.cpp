/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        vector <int> val;
        while(head){
            val.push_back(head->val);
            head=head->next;
        }
        return makebst(val,0,val.size()-1);

    }
};
