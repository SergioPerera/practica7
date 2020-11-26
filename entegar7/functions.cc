#pragma once
#include <iostream>
#include <cassert>
#include <vector>
#include <string>
using namespace std;



bool IsPalindrome(string maybePaliWord) {
  
  int middleChar, counter;
  bool palindrome = true;

  MakingVector(maybePaliWord);

  if ((maybePaliWord.length()) % 2 != 0){

    middleChar = (maybePaliWord.length() + 1)/2;

    for(int i = 0; i <= maybePaliWord.length() - 1; i++){

      if (i == middleChar) {

        i++;

      }

      if(maybePaliWord[i] == maybePaliWord[i + middleChar]){

        counter++;

      }
      
    }

    if (counter != maybePaliWord.length()){
      
      palindrome = false; 
      
    }
  }
  
  return palindrome;

}

int MiddleChar(string maybePaliWord){
  int middleChar;
  if ((maybePaliWord.length()) % 2 != 0){

   

    }
  else {
    
    middleChar = maybePaliWord.length()/2;

  }

  return middleChar;

}

auto MakingVector(string maybePaliWord){

  vector <char> paliVec;
  cout << "El vector es: ( ";
  for(int i = 0; i <= maybePaliWord.length(); i++ ){

    paliVec.emplace_back(maybePaliWord[i]);

    cout << paliVec[i] << " ";
    
  }
  cout << " ) es "; 
}