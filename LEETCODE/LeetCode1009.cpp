#include<iostream>
using namespace std;

/*
    Code Explaination

    first store the number in a variable and initiate mask as 0;

    eg:

    m = 5 // 101 in binary , compliment this , therefore the ans is 010 therefore final ans is 2


    


*/




int bitwiseComplement(int n){
    int m = n;
    int mask = 0;

    while ( m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;

    return ans;

}



int main(){

    int n = 5;

    int ans = bitwiseComplement(n);

    cout << ans << " " << endl;

    return 0;

}