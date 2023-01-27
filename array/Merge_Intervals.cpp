class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(intervals.begin(), intervals.end());

        v = intervals[0];
        for(auto i : intervals){
            if(v[1]>=i[0]){
                v[1] = max(v[1],  i[1]);
            }
            else{
                ans.push_back(v);
                v = i;
            }
        }
        ans.push_back(v);
        return ans;
    }
};