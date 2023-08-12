//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int searchIndex(vector<int> seq , int target)
    {
        int start = 0;
        int end = seq.size();
        
        while(start<=end)
        {
            int mid = start + (end - start)/2;
            if(seq[mid] < target)
                start = mid +1;
            else
                end = mid -1;
        }
        return start;
    }
    int longestSubsequence(int n, int a[])
    {
       vector<int> seq;

       for(int i=0 ; i<n ;i++)
       {
            if(seq.size()==0 || seq.back() < a[i])
                seq.push_back(a[i]);
            else
            {
                int pos = searchIndex(seq , a[i]);
                seq[pos] = a[i];
            }
       }
       return seq.size();
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends