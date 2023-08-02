class Solution 
{
    public:
        int arrangeCoins(int n) 
        {
            int ans=0;
            
            int s = 0;
            int e=n;
            long mid = s+(e-s)/2;
            
            while(s<=e)
            {
                if((mid*(mid+1))/2<=n)
                {
                    ans = mid;
                    s = mid+1;
                }
                else
                {
                    e = mid-1;
                }
                
                mid = s+(e-s)/2;
            }
            
            return ans;
        }
};


/*class Solution {
public:
    int arrangeCoins(int n) {
        int count =0;
        while(n>0)
        {
            n=n-(++count);
        }
         if(n==0)
             return count;
        else
            return count - 1;
        
    }
};*/