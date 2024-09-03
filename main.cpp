#include <iostream>
#include "read_string.h"
#include "print_all_with_upper_first_letter_of_word.h"
using namespace std;

int main(){
    
    // Read from text from user 
    string text= ReadString("Enter a text: \n");
    
    // Print Resutl 
    PrintAllWithUpperFirstLetterOfWord(text);
    
    return 0;
}
