class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n= arr.size();
        for(int i=1;i<= n/2;i++){
            swap(arr[i-1],arr[n-i]);
            
        }
    }
};