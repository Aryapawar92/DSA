#include<bits/stdc++.h>
using namespace std;


bool isPowerofTwo(int x){
    for(int i = 0 ; i<= 30 ; i++){
        int fin = pow(2,i);
        if(fin == x){
            return true;
        }
    }

    return false;

}


int main(){
    int n = 10;
    bool ans = isPowerofTwo(n);

    cout << ans << " " << endl;
}