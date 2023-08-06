class Solution {
public:
    
    int first(vector<int> &nums , int target)
    {
        int left=0;
        int right=nums.size()-1;
        int mid = left + (right - left)/2;
        int ans=-1;
        while(left<=right)
        {
            if(nums[mid]==target)
            {
                ans = mid;
                right = mid -1;
            }
            if(nums[mid]<target)
                left = mid+1;
            if(nums[mid]>target)
                right = mid-1;
            
            mid=left + (right - left)/2;
        }
        return ans;
    }
    
    int last(vector<int> &nums , int target)
    {
        int left=0;
        int right=nums.size()-1;
        int mid = left + (right - left)/2;
        int ans=-1;
        while(left<=right)
        {
            if(nums[mid]==target)
            {
                ans = mid;
                left = mid +1;
            }
            if(nums[mid]<target)
                left = mid + 1;
            if(nums[mid]>target)
                right = mid -1;
            
            mid=left + (right - left)/2;
        }
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        
        vector<int> v;
        v.push_back(first(nums , target));
        v.push_back(last(nums, target));
        
        return v;
        
    }
};