class Solution {
public:
    int countHillValley(vector<int>& a) {
        int count=0;
        int j=0;
        for(int i=1;i<a.size();i++ )
        {
            if(a[i]!=a[i-1])
                a[++j]=a[i];
        }
        for(int i=0;i<j+1;i++)
            cout<<a[i]<<" ";
        
        for(int i=1;i<j;i++)
        {
            if(a[i]>a[i+1] && a[i]>a[i-1])
            {
                count++;
            }
            if(a[i]<a[i-1] && a[i]<a[i+1])
            {
                count++;
            }
        }
        return count;
    }
};


/* optimal solution using two pointer*/
/*
int res =0;
int j=0;
for(int i=1;i<nums.size()-1;i++)
{
    if((nums[i]>nums[i+1] && nums[i]>nums[i-1])  || (nums[i]<nums[i-1]  && nums[i]<<nums[i+1]))
    {
        res++;
        j=i;
    }
}
return res
*/