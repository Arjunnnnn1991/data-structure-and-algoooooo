class Solution {
public:
    int countMajoritySubarrays(vector<int>& arr, int target) {
           int n = arr.size();
    vector<int> marker(n, 0);
    
  
    for (int i = 0; i < n; i++) {
        marker[i] = (arr[i] == target) ? 1 : -1;
    }
    
 
    for (int i = 1; i < n; i++) {
        marker[i] += marker[i-1];
    }
    

    int ans = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i <= j; i++) {
            int sum = marker[j] - (i > 0 ? marker[i-1] : 0);
            if (sum > 0) ans++;
        }
    }
    return ans;
    }
};
