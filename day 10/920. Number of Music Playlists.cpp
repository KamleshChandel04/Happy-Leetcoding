#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int N , Goal , K;
    int mod = 1e9+7;
    long long dp[101][101];
    
    long long solve(int index , int usedSong)
    {
        if(index == Goal)
            return usedSong == N;
        
        if(dp[index][usedSong] != -1)
            return dp[index][usedSong];

        long long usedSongPlay = (solve(index+1 , usedSong)* max(0 , usedSong - K))%mod;
        long long newSongPlay = (solve(index+1  , usedSong+1) * (N - usedSong))%mod;

        long long total = (usedSongPlay + newSongPlay)%mod;

        return dp[index][usedSong] = total%mod;
    }

    int numMusicPlaylists(int n, int goal, int k) {
        this->N = n;
        this->Goal = goal;
        this->K = k;

        memset(dp , -1 , sizeof(dp));
        return (int)solve(0 , 0);
    }
};