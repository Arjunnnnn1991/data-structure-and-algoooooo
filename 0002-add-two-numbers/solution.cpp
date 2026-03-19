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
public: void adder(ListNode* l1, ListNode* l2, ListNode* ans){
    if(l1==NULL&&l2==NULL) return;
    else if(l1==NULL){
    ListNode *temp=new ListNode(0);
    ans->next=temp;
    ans->val=ans->val+l2->val;
    if((ans->val)>=10){
        ans->val-=10;
        ans->next->val++;
    }
    if((l2->next==NULL)&&ans->next->val==0){
    ans->next=NULL;
}
    adder(l1,l2->next,ans->next);
    }
    else if(l2==NULL){
    ListNode *temp=new ListNode(0);
    ans->next=temp;
    ans->val=ans->val+l1->val;
    if((ans->val)>=10){
        ans->val-=10;
        ans->next->val++;
    }
    if((l1->next==NULL)&&ans->next->val==0){
    ans->next=NULL;
}
    adder(l1->next,l2,ans->next);
    }
    else{
    ListNode *temp=new ListNode(0);
    ans->next=temp;
    ans->val=ans->val+l1->val+l2->val;
    if((ans->val)>=10){
        ans->val-=10;
        ans->next->val++;
        }
        if((l1->next==NULL&&l2->next==NULL)&&ans->next->val==0){
    ans->next=NULL;
}
    adder(l1->next,l2->next,ans->next);
    }
    return;
    
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode *c=new ListNode(0);
     ListNode *c2=new ListNode(0);
     c->next=c2;
     adder(l1,l2,c);
     return c;

    }
};
