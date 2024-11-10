#include<bits/stdc++.h>
using namespace std;

void rotateArraybyK(vector<int>& arr , int k){

    vector<int> temp;

    for(int i = 0 ; i<arr.size() ; i++){
        temp[(i+k)%arr.size()] = arr[i];
    }

    arr = temp;
}