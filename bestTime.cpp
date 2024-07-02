class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit=0;
        int size=nums.size();
        int mini=nums[0];
        for(int i=1;i<size;i++)
        {
            int cost=nums[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,nums[i]);
        }
        return profit;
    }
};
