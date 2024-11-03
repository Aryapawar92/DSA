#include<bits/stdc++.h>
using namespace std;

/* sorting in ascending order 

/swap the smallest number with the first index and so on ans so forth

for example: a = [7,5,1]

round 1: swap 7 and 1 

etc

time complexity

 */
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}


void selectionSort(vector<int>& arr , int n){

    for(int i =0 ;i<n-1;i++){
        int minIndex  = i;

        for(int j = i+1 ; j< n ;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }

        } 
        swap(arr[i] , arr[minIndex]);
    }
}


int main(){

    vector<int> sample1 = {7, 8, 1, 9};
    vector<int> sample2 = {8, 5, 4, 1, 2};

    cout << "Before Sorting sample1: ";
    printVector(sample1);

    selectionSort(sample1, sample1.size());

    cout << "After Sorting sample1: ";
    printVector(sample1);
    
    cout << "Before Sorting sample2: ";
    printVector(sample2);

    
    selectionSort(sample2, sample2.size());

    

    cout << "After Sorting sample2: ";
    printVector(sample2);



}

