#include <iostream>

int main(){
    int x = 200, y = 50, z = 100;
     if (x > y && y > z ){
        std::cout<<"1st Block Code";
     }

     if (z > y && z < x){
        std::cout<<"2nd Block Code";
     }

     if ((y + 200) < x && (y+150) < z ){
        std::cout<<"3rd Block Code";
     }
}
