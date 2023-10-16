/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file references.cc
  * @author Ines Cabrera Betancor
  * @date Oct 16 2023
  * @brief This program is used to understand how references work 
  * @bug There are no known bugs
  */

#include <iostream>
#include <cassert>

int main() {
  // DISCLAIMIER: Take into account that identifiers should always be meaningful
  //              The use of identifiers with a single character (i, p, etc.) is a Bad Practice
  //              Here we use such identifiers for the sake of simplicity and to relate this code
  //              with the slides used in the classes
  
  int number{42};
  int& reference = number; // In this context, & does not mean “address of”, it means “reference to”.

  // std::cout << i << '\n'; // print the value of i
  std::cout << reference << '\n'; // print the value of the reference

  // assert(j == 42);  // If the assertion is not true, it will halt the program

  return 0;
}
