class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        int m=nums.size();
        int a[100000]={0};

        for(int i=0;i<m;i++)
            a[nums[i]]=1;

        for(int i=1;i<=m;i++)
            if(a[i]==0)
                v.push_back(i);
        return v ;
    }
};