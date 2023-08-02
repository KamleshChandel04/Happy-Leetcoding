class Solution {
public:
    int minCostClimbingStairs(vector<int>& v) {
    int cost=0;
        for(int i=2;i<v.size();i++)
            v[i]+=min(cost+v[i-1],cost+v[i-2]);
        return min(v[v.size()-1],v[v.size()-2]);
    }
};