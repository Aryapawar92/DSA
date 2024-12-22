#include <iostream>
#include <bits/stdc++.h>

int main(){
    //pattern printing practice

    /*
        4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4  
       4 4 4 4 4 4
       4 4 4 4 4 4 

       10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15


    
    */

   for(int i = 1;i<=6;i++){
    for(int j = 1;j<=6;j++){
        std::cout<< "4";
    }
    std::cout << std::endl;
   }

   for(int i = 1;i<=5;i++){
    for(int j = 1;j<=5;j++){
        std::cout<< j*j << " ";
    }
    std::cout<< " " << std::endl;
   }

   for(int i = 1;i<=5;i++){
    for(int j = 1;j<=i;j++){
        std::cout << j << " ";
    }
    std::cout<<std::endl;
   }

    

   




   return 0;
}