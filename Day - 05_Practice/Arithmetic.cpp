#include <iostream>

int main() {
    int a = 5;
    int b = ++a;  // a is incremented first, then b is assigned the value of 'a' (6).

    std::cout << "Pre-Increment:" << std::endl;
    std::cout << "a = " << a << std::endl;  // a becomes 6
    std::cout << "b = " << b << std::endl;  // b is also 6 (updated value of a)

    return 0;
}
