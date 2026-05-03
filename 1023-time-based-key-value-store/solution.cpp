class TimeMap {
public:

map<string,map<int,string>>m;
    TimeMap() {}    
    void set(string key, string value, int timestamp) {
        m[key][timestamp]=value;
        return;
    }
    
    string get(string key, int timestamp) {
        string ans="";
        if(m[key].count(timestamp)){
            ans=m[key][timestamp];
           
        }
        else{
           

            auto it = m[key].upper_bound(timestamp);

            if (it != m[key].begin()) {
                 --it;
                ans=it->second;
            }
        }

        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
