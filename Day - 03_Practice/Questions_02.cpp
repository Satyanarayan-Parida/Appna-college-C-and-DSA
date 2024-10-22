#include <iostream>

int main() {

    int x = 10, y = 5;
    int exp1 = (y * (x / y + x / y));
    int exp2 = (y * x / y + y * x / y);

    std::cout<<exp1<<std::endl;
    std::cout<<exp2<<std::endl;

    return 0;

}