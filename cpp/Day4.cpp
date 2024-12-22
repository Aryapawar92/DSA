#include <iostream>
#include <bits/stdc++.h>



int main(){
    int a,b;

    std::cout<<"enter your number:";
    std::cin>>a;
    std::cout<<"enter your second number";
    std::cin>>b;

    //std::cout<<"final answer"<<a+b;

    //bigger number

    if(a>b){
        std::cout<< "Question 1:"<<a;
    }
    else{
        std::cout<<"Question 1:"<<b;
    }

    for(int i =0;i<20;i++){
        std::cout<< i << ')' <<"India will win world cup"<<std::endl;
    }


    return 0;
}