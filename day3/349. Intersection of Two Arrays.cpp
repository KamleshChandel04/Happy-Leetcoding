class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        for(int i=1;i<nums1.size();i++)
        {
            if(nums1[i]==nums1[i-1])
            {
                nums1.erase(nums1.begin()+i);
                i--;
            }
            
        }
        
        vector<int> ans;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j])
                j++;
            else
                i++;
                
        }
        
        
        return ans;
        
    }
};