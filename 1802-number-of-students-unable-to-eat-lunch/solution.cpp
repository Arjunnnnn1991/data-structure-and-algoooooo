#include<queue>
class Solution {
public:
    int countStudents(vector<int>& arr, vector<int>& s) {
        queue<int>q;
        for(int i=0;i<arr.size();i++){
            q.push(arr[i]);
        }
        int i=0;
        int size=s.size();
        int j=0;
        for(int l=0;l<size;l++){
            if(q.front()==s[j]){
                j++;
                q.pop();
                i++;
            }
            else{
                int count=0;
                int k=q.size();
                bool flag=false;
                while(count<k){
                    if(q.front()==s[j]){
                        j++;
                        q.pop();
                        flag =true;
                        break;
                    }
                    else{
                        q.push(q.front());
                        count++;
                        q.pop();
                    }

                }
                if(!flag) break;
                else continue;

            }
        }
    return q.size();
    }
};
