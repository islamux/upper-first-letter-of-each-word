#include <iostream>
#include "is_char_in_text.h"
using namespace std;
#pragma once
void SearchOnLetter(string text, char letterToSearch){
    if (IsCharInText(text,letterToSearch))
    {
        cout << "Perfect!\n";
    }else{
        cout << "No found\n";
    } 
}