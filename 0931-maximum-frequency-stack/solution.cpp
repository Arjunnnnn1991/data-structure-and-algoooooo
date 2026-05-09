class FreqStack {
public:
unordered_map<int,int> m;
priority_queue<tuple<int,int,int>>pq;
int idx;
    FreqStack() {
        m;
      pq;
        idx=0;
    }
    
    void push(int val) {
        m[val]++;
        pq.push({m[val],idx++,val});
    
    }
    
    int pop() {
       auto [x,y,z]=pq.top();
       pq.pop();
       m[z]--;
       return z;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
//   int maxima=-1;
//         int vali;
//         if(m.size()==0) return 0;
//         for(auto x:m){
//             if(x.second.first>maxima){
//                 vali=x.first;
//                 maxima=x.second.first;
//             }
//             else if(x.second.first==maxima){
//                 if(x.second.second[x.second.second.size()-1]>m[vali].second[m[vali].second.size()-1]){
//                     vali=x.first;
//                 }
//             }
//         }
//         m[vali].second.pop_back();
//         m[vali].first--;
//         if(m[vali].first==0) m.erase(vali);
//         return vali;
