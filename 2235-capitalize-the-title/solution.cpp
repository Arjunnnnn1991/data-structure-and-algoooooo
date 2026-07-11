class Solution {
public:
    string capitalizeTitle(string title) {
        string ans="";
        string hold="";
        int j=0;
        while(j<title.size()){
            if(title[j]==' '){
for (auto &c : hold) c = tolower(c);
                if(hold.size()>2){
                    hold[0]=(char)(hold[0]-'a'+'A');
                }
                ans.append(hold);
                ans.push_back(' ');
                hold="";
                j++;
            }
            else{
                hold.push_back(title[j]);
                j++;
            }
        }
        if(hold.size()){
            for (auto &c : hold) c = tolower(c);
                if(hold.size()>2){
                    hold[0]=(char)(hold[0]-'a'+'A');
                }
                ans.append(hold);
                
                hold="";
                j++;
        }
        return ans;
    }
};
