#include <iostream>

void troca_por_valor(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 2, b = 3;

  std::cout << "Antes: a = " << a << " b = " << b << std::endl;

  troca_por_valor(a, b);

  std::cout << "Depois: a = " << a << " b = " << b << std::endl; // o valor altera

  return 0;
}