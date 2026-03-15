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
    ListNode* middleNode(ListNode* head) {
        // int size=0;
        // ListNode* temp= head;
        // while(temp!=NULL){
        //     size++;
        //     temp=temp->next;
        // }
        // int i=size/2 +1;
        // ListNode* temp2= head;
        // for(int j=1;j<i;j++){
        //     temp2=temp2->next;
            
        // }
        // return temp2;
        ListNode* slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL){
            if(fast->next->next==NULL){
                slow=slow->next;
                break;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};
