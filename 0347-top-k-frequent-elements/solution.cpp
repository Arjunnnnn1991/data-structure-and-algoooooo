class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int ,int>m;
       for(auto x: nums){
        m[x]++;
       }
      priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
       for(auto x: m){
        pair<int,int> t={x.second,x.first};
        pq.push(t);
        if(pq.size()>k)pq.pop();
       }
       vector<int> ans(k,0);
       for(int i=0;i<k;i++){
        ans[i]=pq.top().second;
        pq.pop();
       }
       return ans;
    }
};
//  unordered_map<int,int>m;
//         for(int x:nums){
//             m[x]++;                              bucket sort approrch
//         }
//     vector<vector<int>> bucket(nums.size() + 1);
//     for(auto x : m)
//         bucket[x.second].push_back(x.first);  
//     vector<int> ans;
//     for(int i = bucket.size()-1; i >= 0 && k > 0; i--){
//         for(int num : bucket[i]){     
//          if(k>0)   ans.push_back(num);
//             k--;
//         }
//     }
//        return ans;
// bool cmp(const  vector<int> a,const  vector<int> b){         custom comparator in map and 2 d vectore
//     return a[1]>b[1];
// }
// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int> m;
//         for(int i=0;i<nums.size();i++ ){
//             m[nums[i]]++;
//         }
//         vector<vector<int>> arr;
//         for(auto x: m){
//             vector<int> t={x.first,x.second};
//             arr.push_back(t);
//         }
//         sort(arr.begin(),arr.end(),cmp);
//         vector<int> ans;
//         for(int i=0;i<k;i++){
//             ans.push_back(arr[i][0]);
//         }
//         return ans;
        
//     }
// };
