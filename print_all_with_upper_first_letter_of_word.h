#include <iostream>
using namespace std;
#include <string.h>
#pragma once
void PrintAllWithUpperFirstLetterOfWord(string text){

    // print first letter

      if (text[0]!=' ')
      {
       cout << (char)toupper(text[0])<< "\n"; 
      }
      
     for (int i = 0; i <=text.length(); i++)
     {
        if (text[i]!= ' ' )
        { 
            cout << text[i+1] << "\n";
        }else{
          cout << (char)toupper(text[i+1]) << "\n";
        }
                    

    }
      cout << "\n"; 
}