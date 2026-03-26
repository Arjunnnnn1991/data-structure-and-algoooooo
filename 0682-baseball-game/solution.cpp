class Solution {
public:
    int calPoints(vector<string>& arr) {
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            if(arr[i]=="+"){
                int x=st.top();
                st.pop();
                int y=st.top();
                st.push(x);
                st.push(y+x);
            }
            else if(arr[i]=="D"){
                int x=st.top();
                st.push(x*2);
            }
            else if(arr[i]=="C") st.pop();
            else {
                int x=stoi(arr[i]);
                st.push(x);
            }
        }
        int x=0;
        while(st.size()!=0){
            x+=st.top();
            st.pop();
        }
        return x;
    }
};
