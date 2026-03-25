class Solution {
public:

    int largestRectangleArea(vector<int>& arr) {
    if(arr.size()==1) return arr[0];
    int n=arr.size()-1;
    int prevsm[n+1];
    prevsm[0]=0;
    stack<int> st;
    st.push(0);
    int i=1;
    while(i<=n){
        while(st.size()!=0&&arr[st.top()]>=arr[i]) st.pop();
        if(st.size()==0) prevsm[i]=0;
        else prevsm[i]=st.top()+1;
        st.push(i);
        i++;
    }
    int m=arr.size();
    int nxtsml[n+1];
    nxtsml[n]=m;
    stack<int> st1;
    st1.push(n);
    n--;
    while(n>=0){
        while(st1.size()!=0&&arr[st1.top()]>=arr[n]) st1.pop();
        if(st1.size()==0) nxtsml[n]=m;
        else nxtsml[n]=st1.top();
        st1.push(n);
        n--;
    }
    
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        int cur=arr[i]*(nxtsml[i]-prevsm[i]);
        maxi=max(cur,maxi);
    }
    return maxi;
    }
};
