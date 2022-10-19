/*
* Student ID: 201361872
* Student Name: Fazal Elahi
* Email: sgfelahi@student.liverpool.ac.uk
* User: sgfelahi
* Problem ID: 1022
* RunID: 
* Result:  
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int english_char = 0, digits = 0, space = 0, other = 0;

    int memory_max = 1048576;
    char *memory_pointer = (char*)calloc(memory_max,sizeof(char));
    // Debug - printf("Please Enter your Striing: \n");

    fgets(memory_pointer,memory_max, stdin);
    // Debug - printf("My Input is: %s\n", memory_pointer);

    // ASCII - Reference.
    // English Char | A-Z 65-90 - a-z 97-122
    // Digits | 48 - 57
    // Spaces | 32
    // Other | Anything not above.
  
    for (int i = 0; i <= memory_max; i++) {
        if((*(memory_pointer+i) >='a' && *(memory_pointer+i)<='z') || (*(memory_pointer+i) >='A' && *(memory_pointer+i)<='Z')) {
            english_char++;
        }
        else if (*(memory_pointer+i) >= '0' && *(memory_pointer+i) <= '9' ) {
            digits++;
        }
        else if (*(memory_pointer+i) == 32) {
            space++;
        } 
        else if (*(memory_pointer+i) != 00 && *(memory_pointer+i) != '\n') {
            other++;
        } 
        // Debug - printf("%d",*(memory_pointer+i));      
    }

    printf("%d %d %d %d", english_char, digits, space, other);

    free(memory_pointer);
    
    return 0;
}
