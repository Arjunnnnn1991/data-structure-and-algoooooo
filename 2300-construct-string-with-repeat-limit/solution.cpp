// class Solution {
// public:
//     string repeatLimitedString(string s, int k) {
//         int arr[26]={0};
//         for(auto x:s){
//             arr[x-'a']++;
//         }
//         string ans="";
//         for(int i=25;i>=0;i--){
//             if(arr[i]==0) continue;
//             else {
//                 while(true){
//                     int use=min(k,arr[i]);
//                     while(use--){
//                         ans+=(char)('a'+i);
//                         arr[i]--;
//                     }
//                     if(arr[i]>0){
//                         int j=i-1;
//                         while(j>0&&arr[j]==0)j--;
//                         if(j<0) return ans;
//                         ans+=(char)('a'+j);
//                         arr[j]--;

//                     }
//                     else break;
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    string repeatLimitedString(string s, int k) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        priority_queue<pair<char, int>> pq;
        for (auto& it : freq) {
            pq.push({it.first, it.second});
        }

        string ans = "";
        while (!pq.empty()) {
            pair<char, int> curr = pq.top();
            pq.pop();

            int use = min(curr.second, k);
            for (int i = 0; i < use; i++) ans += curr.first;
            curr.second -= use;

            if (curr.second > 0) {
                if (pq.empty()) break; 

                pair<char, int> next = pq.top();
                pq.pop();

                ans += next.first;
                next.second--;

               
                if (next.second > 0) pq.push(next);
              
                pq.push(curr);
            }
        }
        return ans;
    }
};
