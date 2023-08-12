
#include<bits/stdc++.h>
using namespace std;

bool find(vector<vector<int>>& bettingInfo  , int target , int i)
{
    int s = 0 , e = bettingInfo[i].size() -1;
    while(s <= e)
    {
        int mid = s + (e-s)/2;
        if(bettingInfo[i][mid] == target)
            return true;
        if(bettingInfo[i][mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return false;
}

void minNumPeople(vector<vector<int>>& bettingInfo , int x , int n)
{
    vector<int> person;
    int mini = INT_MAX;

    for(int i=0 ;i<n ;i++)
    {
        int cost = bettingInfo[i].size();
        bool bet = find(bettingInfo , x , i);
        if(bet && mini >= cost)
        { 
            if(mini > cost)
            {
                person.clear();
                mini = cost;
                person.push_back(i+1);
            }
            else
                person.push_back(i+1);
        }
    }
    
    cout<<person.size()<<endl;
    for(auto it : person)
        cout<<it<<" ";
    return ;
}

int main()
{
    int n ;
    cin>> n;
    vector<vector<int>> bettingInfo;
    for(int i=0 ;i<n ;i++)
    {
        int c ;
        cin>>c;
        vector<int> temp(c);
        for(int j=0 ;j<c ;j++)
            cin>>temp[j];

        sort(temp.begin() , temp.end());
        bettingInfo.push_back(temp);
    }
    int x;
    cin>>x;

    minNumPeople(bettingInfo  , x , n);
    return 0;
}