class Solution {
    public:
        int minJumps(vector<int>& arr) {
            int n = arr.size();
            if (n <= 1) return 0;
            if (arr[0] == 0) return -1;
    
            int jumps = 1;
            int farthest = arr[0];
            int current_end = arr[0];
    
            for (int i = 1; i < n; i++) {
                if (i == n - 1) return jumps;
                farthest = max(farthest, i + arr[i]);
                if (i == current_end) {
                    jumps++;
                    current_end = farthest;
                    if (current_end <= i)
                        return -1;
                }
            }
    
            return -1;
        }
    };
    