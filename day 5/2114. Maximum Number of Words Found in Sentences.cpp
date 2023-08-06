class Solution {
public:
    int mostWordsFound(vector<string>& sent) {
        int ans=0;
        for(int i=0;i<sent.size();i++)
        {
            int n= sent[i].size();
            ans = max(ans , n);
            cout<<ans<<" ";
        }
        
        return ans;
    }
};