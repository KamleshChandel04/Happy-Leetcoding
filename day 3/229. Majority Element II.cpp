class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size()/3;
        int count =1;
        sort(nums.begin(),nums.end());
        int i;
        if(nums.size()<2)
            return nums;
        
        for(i=0;i<nums.size()-1;i++)
        {         
            if(nums[i]==nums[i+1])
            {
                count++;
            }
            else
            {
                if(count>n)
                    ans.push_back(nums[i]);
                count=1;
            }
                
        }
        
        if(count>n)
                    ans.push_back(nums[i]);
        return ans;
    }
};