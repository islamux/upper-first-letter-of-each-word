#include <iostream>
#include <string>
#include "read_string.h"
#include "read_char.h"
#include "search_on_letterr.h"
using namespace std;

int main(){
    
    // Read from text from user 
    string text= ReadString("Enter a text: \n");
    
    // Read what to search on 
    char character = ReadChar("Enater the char to search on: \n");
    
    // Print Resutl 
    SearchOnLetter(text,character);
    
    return 0;
}
