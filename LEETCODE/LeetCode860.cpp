#include<bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int>& bills) {
        int fivecount = 0;
        int tencount = 0;

        for(int i =0;i<bills.size();i++){
            if(bills[i] == 5) fivecount += 1;

            else if(bills[i] == 10){
                if(fivecount){
                    fivecount--;
                    tencount++;
                }
                else{
                    return false;
                }
            }
            else{
                if(fivecount && tencount){
                    fivecount -= 1;
                    tencount -= 1;
                }
                else if(fivecount >= 3) fivecount -= 3;
                else{
                    return false;
                }
            }
            
        }
        return true;
    }