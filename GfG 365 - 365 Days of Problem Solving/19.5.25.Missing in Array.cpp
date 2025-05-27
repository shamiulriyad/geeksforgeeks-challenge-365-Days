class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        unordered_set<int> s(arr.begin(), arr.end());
        for (int i = 1; i <= n; i++) {
            if (s.find(i) == s.end()) {
                return i; 
            }
        }
        return -1;
    }
};