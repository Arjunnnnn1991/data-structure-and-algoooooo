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
 ListNode* reverse(ListNode* head){
    if(head==NULL|| head->next==NULL) return head;
    ListNode * newop=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newop;
 }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next ==NULL) return true;
       ListNode* slow=head;
       ListNode* fast=head;
       while(fast!=NULL&& fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
       }
       ListNode* news=reverse(slow);
       while(news!=NULL){
        if(news->next==head){
            if(news->val==head->val) return true;
            else return false;
        }
        if(news->val!=head->val) return false;
        else{
            news=news->next;
            head=head->next;
        }
       }
       return true;
    }
};
