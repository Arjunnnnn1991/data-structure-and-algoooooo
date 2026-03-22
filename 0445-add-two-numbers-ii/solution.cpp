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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* pre=NULL;
        ListNode* cur=l1;
        ListNode* post=l1->next;
        while(post){
            cur->next=pre;
            pre=cur;
            cur=post;
            post=post->next;
        }
        cur->next=pre;
        ListNode* pre2=NULL;
        ListNode* cur2=l2;
        ListNode* post2=l2->next;
        while(post2){
            cur2->next=pre2;
            pre2=cur2;
            cur2=post2;
            post2=post2->next;
        }
        cur2->next=pre2;
        ListNode* c=new ListNode(10);
        ListNode* temp=c;
        int carry=0;
        while(cur||cur2||carry!=0){
            int total=0;
            if(cur){
                total+=cur->val;
                cur=cur->next;
            }
            if(cur2){
                total+=cur2->val;
                cur2=cur2->next;
            }
            if(carry!=0){
                total+=carry;
                carry=0;
            }
            if(total>=10){
                carry=total/10;
            }
            ListNode* t=new ListNode(total%10);
        temp->next=t;
        temp=temp->next;
        }
        c=c->next;
        ListNode* pre3=NULL;
        ListNode* cur3=c;
        ListNode* post3=c->next;
        while(post3){
            cur3->next=pre3;
            pre3=cur3;
            cur3=post3;
            post3=post3->next;
        }
        cur3->next=pre3;
        return cur3;
    }
};
