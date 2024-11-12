#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int>& arr){
    //dutch national algorithm

    int low = 0;
        int mid = 0;
        int high = arr.size() - 1;

        for(int i = 0 ; i<arr.size();i++){
            if(arr[mid] == 0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }
}