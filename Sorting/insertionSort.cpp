#include<bits/stdc++.h>
using namespace std;

/*

array = [1,4,2,5,7]

 now 4 is larger than 2 
 therefore shift 4 first then copy the 2 and place it in 4

 it takes one element at a time and either it shifts or keeps it at same place

 why to use :  it sorts on the way , adaptable , stable 

 Time complexity : o(n^2)
 Space complexity : o (1)

 Best Case : already sort
 Worst Case : reversely sort





*/





void printVector(vector<int>& v){
    for(int num : v){
        cout << num << " " ;
    }
    cout << endl;
}



void insertionSort(vector<int>& v,  int n){
    for(int i = 1 ; i < n;i++){
        int temp = v[i];
        int j = i-1;
        for( ;j>=0;j--){
            if(v[j] > temp){
                v[j+1] =v[j];
            }
            else{
                break;
            }
        }
        v[j + 1] = temp;

    }

}



int main(){
    vector<int> sample1 = {7, 8, 1, 9};
    vector<int> sample2 = {8, 5, 4, 1, 2};

    cout << "Before Sorting sample1: ";
    printVector(sample1);

    insertionSort(sample1, sample1.size());

    cout << "After Sorting sample1: ";
    printVector(sample1);
    
    cout << "Before Sorting sample2: ";
    printVector(sample2);

    
    insertionSort(sample2, sample2.size());

    

    cout << "After Sorting sample2: ";
    printVector(sample2);

}