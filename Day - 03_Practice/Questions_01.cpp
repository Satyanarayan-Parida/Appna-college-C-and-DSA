#include <iostream>
#include <iomanip>


int main(){

    std::cout<<std::fixed<<std::setprecision(2);
    // Integer Value
    int x = 2, y = 5;
    int exp1 = (x * y / x);
    int exp2 = (x * (y / x));
    std::cout<< exp1 <<std::endl;
    std::cout<<exp2<<std::endl;

    //Floating value

    float num1 = 2, num2 =5;
    float exp3 = (num1 * num2 / num1);
    float exp4 = (num1 * (num2 / num1));
    std::cout<<exp3<<std::endl;
    std::cout<<exp4<<std::endl;

    return 0;
}
