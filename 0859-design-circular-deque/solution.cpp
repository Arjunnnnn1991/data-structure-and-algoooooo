class Node{
    public:
    int val;
    Node* next;
    Node* pre;
    Node(int v):val(v),next(NULL),pre(NULL){}
};
class MyCircularDeque {
public:
int size;
Node* head;
Node* tail;
int maxi;
    MyCircularDeque(int k) {
        size=0;
        head=tail=NULL;
        maxi=k;
    }
    
    bool insertFront(int value) {
         if(size==0){
            head=tail=new Node(value);
            size++;
            return true;
        }
        if(size==maxi) return false;
        else{
            size++;
            Node* c=new Node( value);
            c->next=head;
            head->pre=c;
            head=c;
            return true;
        }
    }
    
    bool insertLast(int value) {
        if(size==0){
            head=tail=new Node(value);
            size++;
            return true;
        }
        if(size==maxi) return false;
        else{
            Node* c=new Node(value);
            c->pre=tail;
            tail->next=c;
            tail=c;
            size++;
            return true;

        }
    }
    
    bool deleteFront() {
        if(size==0) return false;
        else{
            head=head->next;
            if(head&&head->pre)head->pre=NULL;
            size--;
            return true;
        }
    }
    
    bool deleteLast() {
        if(size==0) return false;
        else{
            size--;
            tail=tail->pre;
            if(tail)tail->next=NULL;
            return true;
        }
    }
    
    int getFront() {
        if(size==0) return -1;
        else return head->val;
    }
    
    int getRear() {
        if(size==0) return -1;
        else return tail->val;
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==maxi;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
