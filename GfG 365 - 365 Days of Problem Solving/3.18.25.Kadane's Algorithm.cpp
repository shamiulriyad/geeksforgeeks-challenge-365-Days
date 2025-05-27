class Solution {
    public:
      int maxSubarraySum(vector<int> &arr) {
          // Your code here
          int maxVal = arr[0];
          int sum = 0;
          for(int i = 0; i < arr.size(); i++)
          {
              sum += arr[i];
  
              maxVal = max(sum, maxVal);
              if(sum < 0)
              {
                  sum = 0;
              }
  
          }
          return maxVal;
      }
  };