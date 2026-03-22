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
    ListNode* mergeNodes(ListNode* head) {
    bool flag =false;
    ListNode* slow=head;
    ListNode * fast=head;
    int sum=0;
    while(fast&&fast->next){
        if(fast->next->val==0){
            ListNode* temp=new ListNode(sum);
            sum=0;
            
            slow->next=temp;
            if(!flag){
                head=slow->next;
                flag=true;
            }
           
            slow=slow->next;
            
        }
        else { sum+=fast->next->val;}
        fast=fast->next;
    }
    return head;
    // ListNode* n=new ListNode(10);
    // ListNode* t=n;
    // ListNode * temp=head;
    // int Sum=0;
    // while(temp&&temp->next){
    //     if(temp->next->val==0){
    //         ListNode* c=new ListNode(Sum);
    //         Sum=0;
    //         t->next=c;
    //         t=t->next;
            
    //     }
    //     else Sum+=temp->next->val;
    //     temp=temp->next;
    // }
    // return n->next;
    }
};
