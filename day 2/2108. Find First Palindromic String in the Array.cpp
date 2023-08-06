class Solution {
public:
    bool is_palindrome(string str)
    {
        for(int i=0;i<str.length()/2;i++)
            if(str[i]!=str[str.length()-1-i])
                return false;
        return true;
    }
    string firstPalindrome(vector<string>& words) 
    {
        
      for(int i=0;i<words.size();i++)
          if(is_palindrome(words[i]))
              return words[i];
        
       return "";
    }
};