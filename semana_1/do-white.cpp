#include <iostream>

int main()
{
  int count = 0; // Inicializar com 0
  int sum = 0;   // Inicializar com 0
  int number;

  do
  {
    std::cout << "Insira um novo número: " << std::endl;
    std::cin >> number;

    if (number != 0)
    { // Só adicionar à soma se não for 0
      sum += number;
      count++;
    }
  } while (number != 0);

  if (count > 0)
  {
    float average = (float)sum / (float)count;
    std::cout << "A média da série é: " << average << std::endl;
  }
  else
  {
    std::cout << "Nenhum número foi inserido!" << std::endl;
  }
}