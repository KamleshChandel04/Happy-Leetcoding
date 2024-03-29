class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int ans = INT_MIN;

        for(int i=0 ;i<nums.size() ;i++)
        {
            sum = max(nums[i] , nums[i]+sum);
            ans = max(ans , sum);
        }

        return ans;
    }
};