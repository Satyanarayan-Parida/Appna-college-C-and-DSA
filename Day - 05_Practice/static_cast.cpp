#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float Num = 80.80;
    cout<<fixed << setprecision(2);
    std::cout<<"Converting flaot type to Int From "<<Num<<" To "<<static_cast<int>(Num);
    return 0;
}