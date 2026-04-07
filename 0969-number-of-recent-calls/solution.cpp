class RecentCounter {
public:
vector<int> q;
int i;
    RecentCounter() {
        q;
        i=0;
    }
    
    int ping(int t) {
        q.push_back(t);
        
        if(q.size()==1) return 1;
       while(t-q[i]>3000)i++;
       return q.size()-i;

    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
