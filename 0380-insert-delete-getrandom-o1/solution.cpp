class RandomizedSet {
public:
vector<int> arr;
unordered_map<int,int>m;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.count(val)) return false;
        arr.push_back(val);
        m[val]=arr.size()-1;
        return true;
    }
    
    bool remove(int val) {
        
        if(!m.count(val)) return false;
        if(arr.size()==1){
            m.erase(val);
            arr.pop_back();
        }
        else{
            int idx=m[val];
            m[arr[arr.size()-1]]=idx;
            m.erase(val);

            arr[idx]=arr[arr.size()-1];
            arr.pop_back();
        }
        return true;
    }
    
    int getRandom() {
        int randidx=rand()%arr.size();
        return arr[randidx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
