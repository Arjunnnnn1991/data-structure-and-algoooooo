class Solution {
public: 
void rec(vector<int> & arr,int low,int high){
    if(low<0) return;
    if(high>=arr.size()) return;
    if(high<=low) return;
    int mid=low+(high-low)/2;
    int pivot=arr[mid];
    int i=low, j=high;
   
    while(i<=j){
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot)j--;
        if(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    rec(arr,low,j);
    rec(arr,i,high);
    return;
}
    vector<int> sortArray(vector<int>& arr) {
        rec(arr,0,arr.size()-1);
        return arr;
    }
};
