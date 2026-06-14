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
    int pairSum(ListNode* head) {
        if(!head->next->next)return head->val+head->next->val;
        ListNode* l=head;
        ListNode*slow=head;
        ListNode*fast=head;
        while(l->next)l=l->next;
        while(fast&&fast->next&&fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* pre=NULL;
        ListNode*cur=slow->next;
        ListNode*post=slow->next->next;
        while(cur){
            cur->next=pre;
            pre=cur;
            cur=post;
            if(post)post=post->next;
        }
        int maxi=-1;
        while(head&&l){
            maxi=max(maxi,head->val+l->val);
            l=l->next;
            if(l==head) break;
            else head=head->next;
        }
        return maxi;

    }
};
