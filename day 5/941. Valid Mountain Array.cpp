class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        
        int size=a.size();
        int i=0;
        
        while(i<size-1  && a[i]<a[i+1])
            i++;
        
        if(i==size-1 || i==0)
            return false;
        
        while(i<size-1  && a[i] > a[i+1])
            i++;
        if(i==size-1)
            return true;
        else
            return false;
            
        
        
    }
};