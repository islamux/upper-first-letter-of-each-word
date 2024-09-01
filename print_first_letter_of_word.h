#include <iostream>
using namespace std;
#include <string.h>
#pragma once
void PrintFirstLetterOfWord(string text){

    // print first letter 
      cout << text[0]<< "\n"; 
     for (int i = 0; i <=text.length(); i++)
     {
        if (text[i] == ' ')
        {
          cout << text[i+1]<<"\n";
        }
      
    }
      cout << "\n"; 
}