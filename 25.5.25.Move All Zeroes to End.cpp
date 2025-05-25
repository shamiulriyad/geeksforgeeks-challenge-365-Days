class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n= arr.size();
        int insx=0;
        for(int i=0;i<n;i++){
            if(arr[i] !=0){
                arr[insx++]=arr[i];
            }
        }
        while(insx<n){
            arr[insx++]=0;
        }
        
    }
};