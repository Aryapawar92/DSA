#include<bits/stdc++.h>
using namespace std;

//sliding window and two pointers

int lengthOfLongestSubstring(string s) {
        vector <int> map(256,-1);

        int l =0 , r =0 , maxLen = 0;
        int n = s.size();

        while(r < n){
            if(map[s[r]] != -1){
                l = max(map[s[r]] + 1 , l);
            }

            map[s[r]] = r;

            maxLen = max(r-l+1,maxLen);

            
            r++;
        }

        return maxLen;
    }