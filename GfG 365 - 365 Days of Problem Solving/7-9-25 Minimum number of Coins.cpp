/*

Approach 1: Greedy (Fast, works for Indian currency)

Sort denominations in descending order: {10, 5, 2, 1}

Loop through each coin:

Take as many coins as possible → n / coin

Reduce remaining amount → n % coin

Continue until n = 0.

Time complexity: O(1) since array size is constant (4 coins)

Space complexity: O(1)

*/




//      Array + Greedy

class Solution {
  public:
    int findMin(int n) {
        // code here
        int coins[] = {10, 5, 2, 1};
      //  int a= coins.size();
      if(n<=0) return 0;
        
        int count=0;
        for(int i=0;i<4;i++){
            if(n>=coins[i]){
                int ans=(n/coins[i]);
                count+=ans;
                n=n%coins[i];
            }
            
        }
        return count;
    }
};


//2️⃣ Vector + Greedy

#include <vector>
using namespace std;

class Solution {
  public:
    int findMin(int n) {
        vector<int> coins = {10, 5, 2, 1};  // descending order
        int count = 0;

        for(int c : coins) {
            if(n >= c) {
                count += n / c;
                n = n % c;
            }
        }
        return count;
    }
};




//3️⃣ DP Version (Generic)



#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int findMin(int n) {
        vector<int> coins = {1, 2, 5, 10}; // any order works
        vector<int> dp(n + 1, n + 1);      // dp[i] = min coins to make i
        dp[0] = 0;                         // base case

        for(int i = 1; i <= n; i++) {
            for(int c : coins) {
                if(i >= c) {
                    dp[i] = min(dp[i], dp[i - c] + 1);
                }
            }
        }
        return dp[n];
    }
};
