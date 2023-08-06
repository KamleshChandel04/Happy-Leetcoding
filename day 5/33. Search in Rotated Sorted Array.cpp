class Solution {
public:
    int search(vector<int>& nums, int target) {
       int j=nums.size()-1;
        for(int i=0; i<=j ; i++,j--)
        {
            if(nums[i]==target)
                return i;
            if(nums[j]==target)
                return j;
        }
        
        
        return -1;
    }
};