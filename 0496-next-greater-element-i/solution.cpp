class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& arr) {
        vector<int> ngi;
        stack<int> st;
        int i=arr.size()-1;
        st.push(arr[i]);
        while(i>=0){
            while(!st.empty()&&st.top()<=arr[i]) st.pop();
            if(st.empty())ngi.push_back(-1);
            else ngi.push_back(st.top());
            st.push(arr[i]);
            i--;
        }
        reverse(ngi.begin(),ngi.end());
        for(int i=0;i<a.size();i++){
            for(int j=0;j<arr.size();j++){
                if(a[i]==arr[j]){
                    a[i]=ngi[j];
                    break;
                }
            }
        }
        return a;
        

    }
};
