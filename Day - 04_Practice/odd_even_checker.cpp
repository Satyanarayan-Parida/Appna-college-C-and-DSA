#include <iostream>

int main(){

    int num;
    std::cout<<"Enter your number here to check its odd or even:";
    std::cin>>num;

    if (num % 2 == 0){
        std::cout<<"The number you enter "<<num<<" is a even number."<<std::endl;
    }
    else{
        std::cout<<"The number you enter "<<num<<" is a odd number.";
    }

    return 0;

}