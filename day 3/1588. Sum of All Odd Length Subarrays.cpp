class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int currentSum=0;
        
        for(int i=0;i<arr.size();i++)
        {
            currentSum=0;
            for(int j=i;j<arr.size();j++)
            {
                currentSum+=arr[j];
                if((j-i) % 2 == 0 )
                {
                    sum+=currentSum;
                    
                }
            }
        }  
        return sum;
    }
};