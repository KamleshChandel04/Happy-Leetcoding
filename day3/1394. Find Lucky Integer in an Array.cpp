class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int temp=-1;
        for(auto a : m)
        {
            if(a.first == a.second)
                temp=max(temp,a.second);
        }
        
        return temp;
    }
};