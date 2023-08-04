class Solution {
public:
    vector<int> solve(int row)
    {
        vector<int> temp;
        temp.push_back(1);

        long long res = 1;
        for(int i=1 ;i<row ;i++)
        {
            res = res * (row - i);
            res = res / i;
            temp.push_back(res);
        }
        return temp;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1 ; i<= numRows ; i++)
            ans.push_back(solve(i));
        return ans;
    }
};