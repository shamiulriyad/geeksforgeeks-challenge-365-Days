class Solution {
  public:
  
  
  void reverse(vector<int>& arr, int start, int end){
      while(start<end){
          swap(arr[start],arr[end]);
          start++;
          end--;
      }
  }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        
        
    }
};