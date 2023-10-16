/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file arithmetic_operator.cc
  * @author Ines Cabrera Betancor
  * @date Oct 16 2023
  * @brief Given two numbers, the program prints all the aritmetics operations posible for them 
  * @bug There are no known bugs
  */

#include<iostream>

int main() {
  int number1{0};
  int number2{0};
  std::cout << "Introduzca dos números separados por un espacio: " ;
  std::cin >> number1 >> number2;
  std::cout << "La suma es: " << number1 << " + " << number2 << " = " << (number1 + number2) << std::endl;
  std::cout << "La resta es: " << number1 << " - " << number2 << " = " << (number1 - number2) << std::endl;
  std::cout << "La multiplicación es: " << number1 << " * " << number2 << " = " << (number1 * number2) << std::endl;
  std::cout << "La division es: " << number1 << " / " << number2 << " = " << (number1 / number2) << std::endl;
  std::cout << "El resto de la division es: " << number1 << " % " << number2 << " = " << (number1 % number2) << std::endl;
  return 0; 
}
