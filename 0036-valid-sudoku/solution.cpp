class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& arr) {
        unordered_map<int,unordered_set<char>>col;
        unordered_map<int,unordered_set<char>>row;
        unordered_map<int,unordered_set<char>>sub;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c=arr[i][j];
                if(c<'0'||c>'9') continue;
                if(row[i].count(c)) return false;
                if(col[j].count(c))return false;
                int h;
                if(i<3){
                    if(j<3) h=1;
                    else if(j<6)h=2;
                    else h=3;
                }
               else  if(i<6){
                    if(j<3) h=4;
                    else if(j<6)h=5;
                    else h=6;
                }
                else{
                    if(j<3) h=7;
                    else if(j<6)h=8;
                    else h=9;
                }
                if(sub[h].count(c)) return false;
                sub[h].insert(c);
                col[j].insert(c);
                row[i].insert(c);
            }
        }
        return true;

    }
};
