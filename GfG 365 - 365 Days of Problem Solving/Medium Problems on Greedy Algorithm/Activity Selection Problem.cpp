class Solution {
public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        vector<pair<int, int>> arr;
        for (int i = 0; i < start.size(); i++)
            arr.emplace_back(finish[i], start[i]);
        sort(arr.begin(), arr.end());
        int ans = 0, finishtime = -1;
        for (auto &activity : arr)
            if (activity.second > finishtime)
                finishtime = activity.first, ans++;
        return ans;
    }
};