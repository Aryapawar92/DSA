#include<bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& c, int k) {
        int lsum = 0 , rsum = 0 ,maxSum = 0;
        int n = c.size();

        for(int i =0;i<k;i++){
            maxSum += c[i];
        }

        for(int i = k -1;i<=0;i--){
            lsum = maxSum - c[i]; // 6 -3
            rsum += c[n-i];
            maxSum = max(maxSum,rsum+lsum);
        }

        return maxSum;
}

int main(){
    vector<int> cardPoints = {1,2,3,4,5,6,1};
    int k = 3;
}