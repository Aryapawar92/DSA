#include <bits/stdc++.h>
using namespace std;

int reverseInteger(int x){
    int ans = 0;
        while(x != 0){
            int digit = x % 10;

            if( (ans > INT_MAX /10) || (ans < INT_MIN/10)){
                return 0;
            }
            ans = ans*10 + digit;

            x = x/10;
        }

    return ans;
}




int main(){
    int x = 1234;
    int ans = reverseInteger(x);

    cout << ans << " " << endl;
    
}