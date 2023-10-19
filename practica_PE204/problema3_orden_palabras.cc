/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file problema 3. Evaluacion de clase
  * @author Ines Cabrera Betancor
  * @date Oct 19 2023
  * @brief Given three words, rpitn them in the other way round 
  * @bug There are no known bugsi
  */

#include <iostream>
#include<string>

int main() {
  std::string palabra1, palabra2, palabra3;
  std::cin >> palabra1 >> palabra2 >> palabra3;
  std::cout << palabra3 << " " << palabra2 << " " << palabra1 << std::endl;
  return 0;
}

