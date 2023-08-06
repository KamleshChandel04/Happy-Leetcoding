#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int index , string &digits , string arr[] , string &output , vector<string>&ans)
    {
        if(index == digits.length())
        {
            ans.push_back(output);
            return ;
        }

        int temp = digits[index] - '0';
        string curr = arr[temp];

        for(int i=0 ;i<curr.length() ;i++)
        {
            output.push_back(curr[i]);
            solve(index+1 , digits , arr , output , ans);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0)
            return {};
        string arr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output ="";
        vector<string> ans;
        solve(0 , digits , arr , output , ans);
        return ans;
    }
};