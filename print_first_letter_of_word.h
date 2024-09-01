#include <iostream>
using namespace std;
#include <string.h>
#pragma once
void PrintFirstLetterOfWord(string text){

       
     for (int i = 0; i <=text.length(); i++)
     {
      if (text[i] == text[0])
      {
        cout <<text[i] << "\n"; 
      }

      if (text[i] == ' ')
      {
        cout << text[i+1]<<"\n";
      }
      
}
cout << "\n"; 
}