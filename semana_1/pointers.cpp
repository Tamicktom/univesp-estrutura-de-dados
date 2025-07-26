#include <iostream>

int main()
{
    int valor = 10;
    int* ponteiro = &valor;

    std::cout << "Valor original: " << valor << std::endl;
    std::cout << "Valor via ponteiro: " << *ponteiro << std::endl;

    *ponteiro = 20;
    std::cout << "Valor modificado via ponteiro: " << valor << std::endl;

    return 0;
}