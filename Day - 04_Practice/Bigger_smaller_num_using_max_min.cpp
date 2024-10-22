#include <iostream>

int main(){

    int num1;
    int num2;

    // Input numbers

    std::cout<<"Enter your first number here:";
    std::cin>>num1;

    std::cout<<"Enter your second number here:";
    std::cin>>num2;

    // Compare and output results

    if (num1 == num2){
        std::cout<<"Both the number are same"<<std::endl;
    }
    else{
        std::cout<<std::max(num1,num2)<<" is bigger"<<std::endl;
        std::cout<<std::min(num1,num2)<<" is smaller"<<std::endl;
    }

    return 0;

}