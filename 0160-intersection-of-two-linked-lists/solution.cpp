/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=0,b=0;
        ListNode* temp1=headA;
        while(temp1!=NULL){
            a++;
            temp1=temp1->next;
        }
        ListNode* temp2=headB;
        while(temp2!=NULL){
            b++;
            temp2=temp2->next;
        }
        if(a>b){
            int c=a-b;
            for(int i=1;i<=c;i++){
                headA=headA->next;
            }
        }
        else if(b>a){
            int c=b-a;
            for(int i=1;i<=c;i++){
                headB=headB->next;
            }
        }
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        while(tempA!=NULL){
            if(tempA==tempB) return tempA;
            else{
                tempA=tempA->next;
                tempB=tempB->next;
            }
        }
        return NULL;
    }
};
