#include <iostream>
#include "complejo.h"

int main(){
    std::cout << "Esta modificación sumará un complejo con un real dejando intacta la parte imaginaria." << std::endl;
    Complejo complejo1{3,5}, complejo2{0,0};
    double numero = 4;
    complejo2.add_real(complejo1,numero);
    complejo2.print_add();
}
