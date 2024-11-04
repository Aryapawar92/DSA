#include<bits/stdc++.h>
using namespace std;

/*
    bubbble sort

    two pointer and swap then if the next element is smaller than the other

    it goes in this way
    the largest element gets placed first and then the other happens

    ith round pe we place the ith largest element

    time complexity  : o(n^2)
    space complexity : o(1)

    best case : already sorted  
    worst case : reverse sorted

    use case : 
*/

void printVector(vector<int>& v){
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}



void bubbleSort(vector<int>& v , int n){

    for(int i = 0;i<n;i++){
        // for round 1 to n-1
        bool swapped = false;
        for(int j = 0;j < n-i; j++){
            if(v[j] > v[j+1]){
                swap(v[j] , v[j + 1]);
                swapped = true;
            }

        }
        if (swapped == false)
        {
            break;
        }
        


    }



}



int main(){
    vector<int> sample1 = {7, 8, 1, 9};
    vector<int> sample2 = {8, 5, 4, 1, 2};

    cout << "Before Sorting sample1: ";
    printVector(sample1);

    bubbleSort(sample1, sample1.size());

    cout << "After Sorting sample1: ";
    printVector(sample1);
    
    cout << "Before Sorting sample2: ";
    printVector(sample2);

    
    bubbleSort(sample2, sample2.size());

    

    cout << "After Sorting sample2: ";
    printVector(sample2);
}