class StockSpanner {
public:
vector<int> arr;

stack<int> st;
    StockSpanner() {
      
    }
    
    int next(int price) {
        // int count=0;
        //     arr.push_back(price);
        //     for(int j=arr.size()-1;j>=0;j--){
        //         if(arr[j]<=price) count++;
        //         else break;
        //     }
        //     return count;
        arr.push_back(price);
       
       
           
            int i=arr.size()-1;
            while(!st.empty()&&arr[st.top()]<=price) st.pop();
            int span;
            if(st.empty())  span=i+1;
            else span=i-st.top() ;
            st.push(i);
            return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
