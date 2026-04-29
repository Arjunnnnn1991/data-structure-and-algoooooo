class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& arr, int idx, int val) {
      unordered_map<long long,long long> m;
      long long widht=(long long)val+1;
      for(long long i=0;i<arr.size();i++){
        long long num=(long long)arr[i];
        long long id=num/widht;
        if(num<0) id--;
        if(m.count(id)) return true;
        if(m.count(id-1)&&abs(num-m[id-1])<=val) return true;
        if(m.count(id+1)&&abs(num-m[id+1])<=val) return  true;
        m[id]=num;
        if(i>=idx){
            long long oldnum=(long long)arr[i-idx];
            long long oldid=oldnum/widht;
            if(oldnum<0)oldid--;
            m.erase(oldid);
        }
      }
      return false;
    }
};
