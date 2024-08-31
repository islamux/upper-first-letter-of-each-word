#include <iostream>
using namespace std;
#include <string.h>
#pragma once
bool IsCharInText(string text, char letterToSearch){
    
    for (short i = 0; i <=text.length(); i++)
    {

        if ( text[i] ==letterToSearch)
        {
            return true;
        }
    }
    return false;
    
}


