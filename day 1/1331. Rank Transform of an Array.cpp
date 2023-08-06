class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        vector<int> ans;
        vector<int> temp;
        map<int,int> m;
        temp=arr;
        sort(temp.begin(),temp.end());
        int count=1;
        for(int i=0;i<temp.size();i++)
        {
            if(i>0)
                if(temp[i]==temp[i-1])
                    count--;
            m[temp[i]]=count++;
        }
        for(int i=0;i<arr.size();i++)
        {
            int n = m[arr[i]];
                ans.push_back(n);
        }
        return ans;
    }
};