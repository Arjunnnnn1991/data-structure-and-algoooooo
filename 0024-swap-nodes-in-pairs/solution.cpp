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
 ListNode* rec(ListNode* head){
    if(head==NULL||head->next==NULL) return head ;
    ListNode* temp=head->next;
    ListNode* tt=head->next->next;
    head->next->next=head;
    head->next=rec(tt);
   return temp;
    
    
 }
class Solution {
public:

    // void  rec(ListNode*head){
    //     if(head==NULL||head->next==NULL ) return ;
    //     ListNode temp*= head->next;
        
    // }
    ListNode* swapPairs(ListNode* head) {
    //  if(head==NULL||head->next==NULL) return head;
    //  ListNode * pre;
    //  ListNode* cur;
    //  ListNode * post;
    //  ListNode * c=new ListNode(10);
    //  c->next=head;
    //  pre=c;
    //  cur=head;
    //  post=head->next;
    //  while(post){
    //     ListNode* temp=pre->next;
    //     pre->next=post;
    //     cur->next=post->next;
    //     post->next=temp;
    //     ListNode* t=cur;
    //     cur=post;
    //     post=t;
    //     pre=post;
    //     if(post->next){cur=post->next;
    //     post=cur->next;}
    //     else break;
    //  }
    //  return c->next;
   
    
    return  rec(head);
    }
};
//jhfkhdgihrgihifhihgishsdlkgirhgihfsdfrhgihrjfishgfirhgorghoejgphighhgjnvbfjkbhgueryhteryhtirtjkfnkjngrjgnerhierhknmfngjfngrihkdnkngjfhg
