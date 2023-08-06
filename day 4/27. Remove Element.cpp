class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                continue;
            }
            else
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};