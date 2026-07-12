class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_set<int>s;
        int r=1;
        unordered_map<int,int>m;
      vector<int> arr2;
      for(auto x:arr){
        arr2.push_back(x);
      }
      sort(arr2.begin(),arr2.end());
      for(auto x:arr2){
        if(!s.count(x)){
            m[x]=r++;
            s.insert(x);
        }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=m[arr[i]];
        }
        return arr;
    }
};
