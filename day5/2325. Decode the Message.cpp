class Solution {
public:
    string decodeMessage(string key, string message) {
        
        string ans;
        unordered_map<char,char>m;
        char p='a';
        for(int i=0;i<key.size();i++)
        {
            if((key[i] != ' ')  && (m.find(key[i])==m.end()))
               {
                   m[key[i]]=  p;
                   p++;
               }
        }
        
        for(int i=0;i<message.size();i++)
        {
            if(message[i]==' ')
                ans+=' ';
            
            else
            ans+=m[message[i]];
        }
        return ans;
    }
};