class Solution {
public:
    bool checkString(string s) {
        int x=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            {
                x=i;
                count=1;
                break;
            }
        }
        
        for(int i=x;i<s.size();i++)
            if(s[i]=='a' && count==1 )
                return false;
        
        return true;
    }
};