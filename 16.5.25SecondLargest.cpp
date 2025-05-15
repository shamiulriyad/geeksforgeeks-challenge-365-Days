class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        if(arr.size()<2)return -1;
        sort(arr.begin(),arr.end(),greater<int>());
        int first =arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]<first){
                return arr[i];
            }
        }
        return -1;
    }
};