/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file problema 2. Evaluacion de clase
  * @author Ines Cabrera Betancor
  * @date Oct 19 2023
  * @brief Given n numbers, the program prints the average of all of them 
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip>

int main() {
  double numero{0};
  double sum{0};
  double contador_numeros{0};
  while (std::cin >> numero) {
    sum += numero;
    contador_numeros++;
  }
  std::cout << std::setprecision(3) << (sum / contador_numeros) << std::fixed << std::endl;
  return 0;
}

