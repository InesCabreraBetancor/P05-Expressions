/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file boolean_operators.cc
  * @author Ines Cabrera Betancor
  * @date Oct 16 2023
  * @brief This program prints the tables of truth of the boolean operators 
  * @bug There are no known bugs
  */

#include<iostream>

int main() {  
  // a || b
  std::cout << std::endl;
  std::cout << " =============== A and B ================ \n" << std::endl;
  std::cout << "         A  |  B  |  A ^ B\n        -------------------   ";
  std::cout << "\n         0  |  0  |  0";
  std::cout << "\n         0  |  1  |  0\n         1  |  0  |  0";
  std::cout << "\n         1  |  1  |  1" << std::endl;

  // a && b
  std::cout << std::endl;
  std::cout << " =============== A or B ================ \n" << std::endl;
  std::cout << "         A  |  B  |  A ^ B\n        -------------------   ";
  std::cout << "\n         0  |  0  |  0";
  std::cout << "\n         0  |  1  |  1\n         1  |  0  |  1";
  std::cout << "\n         1  |  1  |  1" << std::endl;

  // !a  
  std::cout << std::endl;
  std::cout << " =============== NOT A  ================ \n" << std::endl;
  std::cout << "         A  | !A\n        --------   ";
  std::cout << "\n         0  |  1  ";
  std::cout << "\n         1  |  0 \n" << std::endl;

  return 0;
}

