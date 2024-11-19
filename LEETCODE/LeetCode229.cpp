#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        vector<int> pair;
        int count = 0;
        int n = nums.size();

        for(int i =0 ;i< n;i++){
            if(pair.size() == 0 || pair[0] != nums[i]){
                count  = 0;
                for(int j = 0;j<n;j++){
                    if(nums[j] == nums[i]) count++;
                }
                if(count > n/3) pair.push_back(nums[i]);
            }
            if(pair.size() == 2) break;
        }

        return pair;
}

vector<int> majorityElementBetter(vector<int>& nums) {
        vector<int> pair;
        //int count = 0;
        map<int,int> mpp;
        int n = nums.size();
        int mini = n/3 + 1;

        for(int i =0;i<n;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == mini){
                pair.push_back(nums[i]);
            }
        }
        

        return pair;
}