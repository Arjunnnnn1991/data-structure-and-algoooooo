class Solution {
public:
    int earliestFinishTime(vector<int>& a, vector<int>& at, 
                           vector<int>& b, vector<int>& bt) {
        int n = a.size(), m = b.size();
        
        vector<pair<int,int>> land(n), water(m);
        for (int i = 0; i < n; i++) land[i] = {a[i], a[i] + at[i]};
        for (int j = 0; j < m; j++) water[j] = {b[j], b[j] + bt[j]};
        
        sort(land.begin(), land.end());
        sort(water.begin(), water.end());
        
        int ans = INT_MAX;
        int minLandEnd = INT_MAX;
        int li = 0;
        
        for (int j = 0; j < m; j++) {
            while (li < n && land[li].first <= water[j].first) {
                minLandEnd = min(minLandEnd, land[li].second);
                li++;
            }
            if (minLandEnd != INT_MAX)
                ans = min(ans, max(water[j].first, minLandEnd) + (water[j].second - water[j].first));
        }
        
        int minWaterEnd = INT_MAX;
        int wi = 0;
        
        for (int i = 0; i < n; i++) {
            while (wi < m && water[wi].first <= land[i].first) {
                minWaterEnd = min(minWaterEnd, water[wi].second);
                wi++;
            }
            if (minWaterEnd != INT_MAX)
                ans = min(ans, max(land[i].first, minWaterEnd) + (land[i].second - land[i].first));
        }
        
        return ans;
    }
};
