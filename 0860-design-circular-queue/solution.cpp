class MyCircularQueue {
public:
int * q;
int size,maxi;
int fr,br;
    MyCircularQueue(int k) {
        q=new int[k];
        maxi=k;
        size=0;
    fr=-1;
    br=-1;
    }
    
    bool enQueue(int value) {
        if(size==maxi) return false;
        
        br++;
        if(br==maxi) br=0;
        if(fr==-1) fr++;
        size++;
        q[br]=value;
        return true;
    }
    
    bool deQueue() {
        if(size==0) return false;
        size--;
        fr++;
        if(fr==maxi){
            fr=0;
        }
        return true;
    }
    
    int Front() {
        if(size==0) return -1;
        else return q[fr];
    }
    
    int Rear() {
        if(size==0) return -1;
        else return q[br];
    }
    
    bool isEmpty() {
       return size==0;

    }
    
    bool isFull() {
        return size==maxi;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
