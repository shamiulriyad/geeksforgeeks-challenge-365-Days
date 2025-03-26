class Solution {
    public:
      vector<int> findElements(vector<int> arr) {
          // Your code goes here
          if(arr.size() < 2)return {};
          sort(arr.begin(), arr.end());
          arr.pop_back();
          arr.pop_back();
           return arr;
          
      }
  };