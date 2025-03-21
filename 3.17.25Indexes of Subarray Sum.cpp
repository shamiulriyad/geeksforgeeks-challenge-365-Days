class Solution {
    public:
      vector<int> subarraySum(vector<int> &arr, int target) {
          map<int, int>dp;
          dp[0] = -1;
          int sum = 0;
          std::vector<int>ans;
          for(int i = 0; i < arr.size(); i++)
          {
              sum += arr[i];
            
               if(dp.find(sum) == dp.end())
               {   
                   dp[sum] = i;
               }
          }
          map<int, int>::iterator it;
          for(it = dp.begin(); it != dp.end(); it++)
          {
              //std::cout<<it->first<<std::endl;
              if(dp.find(target + it->first) != dp.end())
              {
                  ans.push_back(dp[it->first] + 2);
                  ans.push_back(dp[target + it->first] + 1);
                  return ans;
              }
          }
          ans.push_back(-1);
          return ans;
      }
  };