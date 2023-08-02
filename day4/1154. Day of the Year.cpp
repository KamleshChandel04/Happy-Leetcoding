class Solution {
public:
    
    bool isleap(int year)
    {
        if(year%100==0)
            if(year%400==0)
                return true;
            else
                return false;
        else
        { 
            if(year%4==0)
                return true;
            else
                return false;
        }
    }
    
    int dayOfYear(string date) {
        int ans=0;
        int year = stoi(date.substr(0,4));
        int month= stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        
        ans+=day;
        while(--month)
            
       {

        if(month==1 ||month==3||month==5||month==7||month==8||month==10||month==12)
            ans+=31;
        
        else if(month==4||month==6||month==9||month==11)
            ans+=30;
        else
        {
            if(isleap(year))
                ans+=29;
            else
                ans+=28;
        }
       }
     return ans;   
    }
};