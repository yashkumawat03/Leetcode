class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;

    // Step 1: sort intervals
    sort(intervals.begin(), intervals.end());

    for(auto it : intervals) {
        // If empty OR no overlap
        if(ans.empty() || ans.back()[1] < it[0]) {
            ans.push_back(it);
        }
        else {
            // Merge
            ans.back()[1] = max(ans.back()[1], it[1]);
        }
    }

    return ans;
    }
};