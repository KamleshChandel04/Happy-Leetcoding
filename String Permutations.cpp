//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void solve(int index , string &s , vector<string> &ans)
    {
        if(index == s.length())
        {
            ans.push_back(s);
            return;
        }
        for(int i=index ; i<s.length() ;i++)
        {
            swap(s[i] , s[index]);
            solve(index+1 , s , ans);
            swap(s[i] , s[index]);
        }
    }
    vector<string> permutation(string s)
    {
        vector<string> ans;
        solve(0 , s , ans);
        sort(ans.begin() , ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends