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
// ListNode* revop(ListNode* t){
    
    
//     ListNode* op=new ListNode(0);
//     op->next=t;
//     ListNode* temp=t->next;
    
//     while(temp->next){
//         ListNode* c=temp->next;
//         temp->next->=temp->next->next
//     }

ListNode*  rev(ListNode* wow,int x){
    int gap=x;
    ListNode* post=NULL;
    ListNode* temp=wow->next;
    ListNode* pre= wow;
    ListNode* b= wow;
    ListNode* a= wow->next;
    while(gap>0){
        b=b->next;
        gap--;
    }
    if(b)post=b->next;
    if(b)b->next=NULL;
    ListNode* pre2=NULL;
    ListNode* post2=wow->next->next;
    ListNode * cur=wow->next;
    while(post2){
        post2=cur->next;
        cur->next=pre2;
        pre2=cur;
        cur=post2;
    }
    // cur->next=pre2;
    pre->next=pre2;
    
    a->next=post;

    return wow;



}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* L=new ListNode(0);
        L->next=head;
        head=L;
        if(k==1){
            // int size=0;
            // ListNode* temp=head->next;
            // while(temp){
            //     size++;
            //     temp=temp->next;
            // }
            // head=rev(head,size);
            // return head->next;
            return head->next;
        }
        
        ListNode* tempo=head;
        while(tempo&&tempo->next){
            int countt=0;
            ListNode* mn=NULL;
            if(tempo)mn=tempo->next;
            while(countt<k&&mn){
                countt++;
                mn=mn->next;
            }
            if(k>countt) return head->next;
            else{
               tempo= rev(tempo,k);
            for(int i=0;i<k;i++){
                tempo=tempo->next;
                }
            }
        }
        return head->next;
    }
};
