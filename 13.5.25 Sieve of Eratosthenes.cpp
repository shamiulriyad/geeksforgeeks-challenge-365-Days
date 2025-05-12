// User function Template for C++
class Solution {
  public:
    vector<int> sieveOfEratosthenes(int n) {
        vector<int> prime(n+1,0);
        vector<int> result;
    
    for(int i=2; i<=n; i++){
        if(prime[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++ ){
        if(prime[i]==0){
           result.push_back(i);
        }
    }
    return result;

    }
};