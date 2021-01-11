#include <iostream>
#include "complejo.h"

int main(){
    double real1, real2, imaginario1, imaginario2;
    std::cout << "Introduce la parte real del primer número complejo: " << std::endl;
    std::cin >> real1;
    std::cout << "Introduce la parte imaginaria del primer número complejo: " << std::endl;
    std::cin >> imaginario1;
    std::cout << "Introduce la parte real del segundo número complejo: " << std::endl;
    std::cin >> real2;
    std::cout << "Introduce la parte imaginaria del segundo número complejo: " << std::endl;
    std::cin >> imaginario2;
    std::cout << std::endl;
    Complejo complejo1{real1,imaginario1}, complejo2{real2,imaginario2};
    Complejo resultado{0,0};
    resultado.add(complejo1,complejo2);
    resultado.print_add();
    resultado.sub(complejo1,complejo2);
    resultado.print_sub();
}

    
    
    
    


