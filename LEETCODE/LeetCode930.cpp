#include<bits/stdc++.h>
using namespace std;


    int atmost(vector<int>& nums, int goal){
        int l = 0, r =0 ,count = 0;
        int n = nums.size();
        int sum = 0;

        if(goal < 0) return 0;

        while(r < n){
            sum += nums[r];

            while(sum > goal){
                sum -= nums[l];
                l++;
            }
            count += (r-l+1);
            r++;
        }
        return count;
    }


    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal) - atmost(nums,goal-1);
    }