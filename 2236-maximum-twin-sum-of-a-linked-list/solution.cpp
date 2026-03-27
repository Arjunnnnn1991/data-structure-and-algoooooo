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
class Solution {
public:
ListNode* revmedaaddy(ListNode* head){
    ListNode* cur=head;
    ListNode* pre=NULL;
    ListNode* post=head->next;
    while(post){
        cur->next=pre;
        pre=cur;
        cur=post;
        post=post->next;
    }
    cur->next=pre;
    return cur;
}
    int pairSum(ListNode* head) {
        if(head->next->next==NULL) return head->val+head->next->val;
    ListNode * slow=head;
    ListNode* fast=head;
    while(fast){
        fast=fast->next->next;
        slow=slow->next;
    }
    fast=revmedaaddy(slow);
    int maxi=INT_MIN;
    while(fast){
        int val=fast->val+head->val;
        if(maxi<val) maxi=val;
        fast=fast->next;
        head=head->next;
    }
    return maxi;
    }
};
