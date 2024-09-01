#include <iostream>
#include "read_string.h"
#include "print_first_letter_of_word.h"
using namespace std;

int main(){
    
    // Read from text from user 
    string text= ReadString("Enter a text: \n");
    
    // Print Resutl 
    PrintFirstLetterOfWord(text);
    
    return 0;
}
