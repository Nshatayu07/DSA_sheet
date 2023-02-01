class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans=0;
        int buy=p[0];
        for(int i=1;i<p.size();i++){
            ans = max(ans, p[i]-buy);
            buy = min(buy,p[i]);
        }
        return ans;
    }
};