
#include<iostream>
#include<cassert>
using namespace std;

int main (){
  bool prime = true;
  int number = 12 ;

  for (int divider = 2; divider<number; divider++){ 
      if (number % divider == 0){
        
        prime = false;

      }
     
    }

  cout <<  prime << endl;

  
} //hay que pasar esto a function.h y llamar a la funcion IsPrime