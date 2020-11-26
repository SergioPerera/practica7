#pragma once
#include <iostream>
#include <cassert>
#include "functions.h"
using namespace std;

bool IsPrime(int number);

int main () {

  int number,returnedValue, possiblyPrime{2};
 
  cout << "Este programa solicita al usuario un número e imprime en pantalla todos los números primos menores que el introducido por el usuario" << endl; 
  
  cout << "Introduzca un número entero: ";

  cin >> number;
  
  for (int i = 1; i < number; i++){

    returnedValue = IsPrime(possiblyPrime);

    if (returnedValue == 1){

      cout << possiblyPrime << " ";
    }

    possiblyPrime++; 
  }

  cout << endl;

}
