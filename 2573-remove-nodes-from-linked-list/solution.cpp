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
    ListNode* doit(ListNode* head){
        if(head==NULL||head->next==NULL) return head;
        ListNode* temp=head;
        head=doit(head->next);
        temp->next=NULL;
        
        if(head==NULL) return temp;
        else
            {
            if(temp->val>=head->val){
                temp->next=head;
                return temp;
                }
            else return head;
        
             }
    }
    ListNode* revmedaddy(ListNode* head){
        ListNode* pre=NULL;
        ListNode* cur=head;
        ListNode* post=head->next;
        while(post){
            cur->next=pre;
            pre=cur;
            cur=post;
            post=post->next;
            
        }
        cur->next=pre;
        return cur;
    }
    ListNode* removeNodes(ListNode* head) {
        // if(head==NULL||head->next==NULL) return head;
        // stack<int> st;
        // vector<int> ngi;
        // head=revmedaddy(head);
        // ListNode* temp=head;
        // st.push(temp->val);
        // temp=temp->next;
        // ngi.push_back(-1);
        // while(temp){
        //     while(st.size()!=0&&st.top()<=temp->val) st.pop();
        //     if(st.size()==0) ngi.push_back(-1);
        //     else ngi.push_back(0);
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // for(int i=0;i<ngi.size()/2;i++){
        //     swap(ngi[i],ngi[ngi.size()-1-i]);
        // }
        // head=revmedaddy(head);
        // ListNode* c1=new ListNode(-1);
        // c1->next=head;
        // ListNode* c=c1;
        // ListNode* t=c;
        // int i=0;
        // while(t&&t->next&&i<ngi.size()){
        //     while(ngi[i]==0){
        //         t=t->next;
        //         i++;
        //     }
        //     c->next=t->next;
        //     t=t->next;
        //     c=c->next;
        //     i++;

        // }
        // head=c1->next;

        return doit(head);
    }
};
