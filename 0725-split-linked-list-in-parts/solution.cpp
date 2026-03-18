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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        vector<ListNode*> arr;

        if(k==1){
            arr.push_back(head);
            return arr;
        }
        if(head==NULL){
            for(int y=0;y<k;y++){
                arr.push_back(NULL);
            }
            return arr;
        }
        int size=0;
        ListNode* temp=head;
        while(temp){
            size++;
            temp=temp->next;
        }
        if(size<=k){
            for(int l=0;l<k;l++){
                if(head){arr.push_back(head);
                temp=head->next;
                head->next=NULL;
                head=temp;}
                else{
                    arr.push_back(NULL);
                }
            }
            return arr;
        }
        int i=size%k;
        
        ListNode* temp2;
        ListNode* temp3;
        while(i>0){
            
            arr.push_back(head);
            for(int j=1;j<=size/k;j++ ) head=head->next; 
            temp2=head->next;
            head->next=NULL;
            head=temp2;
            i--;

    }
    int w=k-size%k;
    while(w>0){
        
            arr.push_back(head);
            for(int j=1;j<size/k;j++ ) head=head->next; 
            if(head!=NULL){temp3=head->next;
            head->next=NULL;
            head=temp3;}
            w--;
        }
        if(head)arr.push_back(head);
    return arr;
    }
};
