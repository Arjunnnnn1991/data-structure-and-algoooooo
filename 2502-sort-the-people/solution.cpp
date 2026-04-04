class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0;i<names.size()-1;i++){
            for(int j=0;j<names.size()-1;j++){
                if(heights[j]<heights[j+1]){
                    swap(heights[j],heights[j+1]);
                    swap(names[j],names[j+1]);
                }
            }
        }
        return names;
    }
};
