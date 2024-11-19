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

vector<int> majorityElementBest(vector<int>& nums) {
        
        int count1 = 0 , count2 = 0 , el1 = 0, el2 = 0;
        int n = nums.size();
        
        for(int i =0;i<n;i++){
            if(count1 == 0 && nums[i] != el2){
                
                count1 = 1;
                el1 = nums[i];
            }
            else if(count2 ==0 && nums[i] != el1){
                
                count2 = 1;
                el2 = nums[i];
            }
            else if(el1 == nums[i]) count1++;
            else if(el2 == nums[i]) count2++;
            else{
                count1--;
                count2--;
            }
        }

        vector<int> pair;
        count1 =0 ,count2 =0;
        for(int i =0;i<n;i++){
            if(el1 == nums[i]) count1++;
            else if(el2 == nums[i]) count2++;
        }
        if(count1 > n/3) pair.push_back(el1);
        if(count2 > n/3) pair.push_back(el2);
        

        return pair;
    } 