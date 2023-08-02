class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int size = nums.size();
        
        int i=0;
        int j=size-1;
        while(i<j)
        {
            if(nums[i]%2==0)
                i++;
            else  if(nums[j]%2==0)
                swap(nums[i],nums[j--]);
            else
                j--;
        }
        
        return nums;
    }
};