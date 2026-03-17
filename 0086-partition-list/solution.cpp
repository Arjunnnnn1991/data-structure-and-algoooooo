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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* lower=new ListNode(100);
        ListNode* higher=new ListNode(100);
        ListNode* baseoflower=lower;
        ListNode* baseofhigher=higher;
        while(head!=NULL){
            if(head->val<x){
                lower->next=head;
                head=head->next;
                lower=lower->next;
            }
            else{
                higher->next=head;
                head=head->next;
                higher=higher->next;
            }

        }
        lower->next=baseofhigher->next;
        higher->next=NULL;
        return baseoflower->next;
    }
};
