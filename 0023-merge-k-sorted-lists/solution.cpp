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
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* c= new ListNode(100);
        ListNode* temp=c;
       while(list1!=NULL && list2!=NULL){
        if(list1->val<=list2->val){
            temp->next=list1;
            temp=temp->next;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            temp=temp->next;
            list2=list2->next;
        }
       }
        if(list1!=NULL){
            temp->next=list1;
        }
        if(list2!=NULL){
            temp->next=list2;
        }
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
            ListNode* a=arr[0];
            arr.erase(arr.begin());
            ListNode* b=arr[0];
            
            arr.erase(arr.begin());
            arr.push_back(mergeTwoLists(a,b));
        }
        return arr[0];
    }
};
