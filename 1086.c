#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int compress_word_counter;
int compress_word_minus_one;

void compress(char compress_word) {    
    if (isprint(compress_word) == 1 && iscntrl(compress_word) == 0) {
        if (compress_word_minus_one == 0) {
            compress_word_minus_one = compress_word;
            compress_word_counter++;
        }
        // Till Round N to N+1
        else if (compress_word_minus_one == compress_word) {
            // Case One - Match Found.
            compress_word_minus_one = compress_word;
            compress_word_counter++;
        }
        else {
            // No Match is Found
            if (compress_word_counter >= 2) {
                printf("%c%c%d*",compress_word_minus_one,compress_word_minus_one,compress_word_counter);
                compress_word_minus_one = compress_word;
                compress_word_counter = 1;
            } 
            else {
                printf("%c",compress_word_minus_one);
                compress_word_minus_one = compress_word;
                compress_word_counter = 1;
            }
        } 
    } 
    else if (iscntrl(compress_word) == 1 && compress_word == '\n') {
        printf("\n");
    }
    // printf("Char - %d | CWM %d | Counter: %d \n",compress_word,compress_word_minus_one,compress_word_counter);
}

int main(int argc, char const *argv[]) {

    char character;
    int logic_gate = 0;
    compress_word_minus_one = 1;

    int char_to_pass = 0;
    int char_to_num = 0;

    int expand_condition_one = 0;
    int expand_condition_two = 0;
    int round = 0;
    
    printf("(C) Compress || (E) Expand \n");
    while (scanf("%c", &character) != EOF){
        // Debug - printf(" C:%d LG: %d", character, logic_gate);
        // Round 1 - Detection
        if (logic_gate == 1 || character == 'C') {
            if (character != 'C'){
                compress(character);
            }
            logic_gate = 1;
        }
        else if (logic_gate == 2 || character == 'E') {

            // Debug - printf("expand_condition_one %d \n", expand_condition_one);
            // Debug - printf("expand_condition_two %d \n", expand_condition_two);

            if (expand_condition_one == 1 && expand_condition_two == 1) {
                expand_condition_one = 0;
                expand_condition_two = 0;
                // Debug round++; printf("Round: %d \n",round);
                for (size_t i = 0; i < char_to_num; i++) {
                    printf("%c",char_to_pass);
                }
            }

            if (character != 'E' && iscntrl(character) == 0 && character != '*') {
                
                if (isdigit(character) == 1) {
                    char_to_num = character - '0';
                    expand_condition_one = 1;
                    // Debug - printf("Num: %d \n", char_to_num);
                } 

                else if (isalpha(character) == 1) {
                    expand_condition_two = 1;
                    char_to_pass = (int) character;
                    // Debug - printf("Char %d \n", char_to_pass);
                }
            }

            else if (iscntrl(character) == 1 && character == '\n') {
                printf("\n");
            }
            logic_gate = 2;
        }
    }
    return 0;
}


/*


    if (char_to_pass > 0 && char_to_num > 0) {
                    expand(char_to_pass,char_to_num);
                } 
                else if (char_to_pass == 0 && iscntrl(character) == 0) {
                    char_to_pass = atoi(&character);
                    printf("char_to_pass %d", char_to_pass);
                }

                else if (char_to_num == 0 && iscntrl(character) == 0) {
                    char_to_num = atoi(&character);
                    printf("char_to_num %d", char_to_num);
                }
        
    // Case 1 - Finding Controle Characters.
    if (iscntrl(compress_word == 1)) {
        // printf("Called \n");
        // printf("Controle - %d ",compress_word);
    }

    

    ______________
    
    char inital_char;
    char inital_minus_one;
    int char_counter = 0;

    printf("(C) Compress || (E) Expand \n");

    scanf("%c", &inital_char);

    if (inital_char == 'C') {
        while (inital_char != EOF) {
            scanf("%c", &inital_char);
            // Debug - printf("Memory Location (IC): %p \n", &inital_char);
            // Debug -printf("Word (IC): %d \n", inital_char);
            // Debug - printf("Word (IMC): %d \n", inital_minus_one);
            if (isspace(inital_char) == 1 || inital_char == 10) {
                // Filter Everything Execept for Space
                if (inital_char == 32) {
                    inital_minus_one = inital_char;
                    char_counter++;
                }
            } 
            
            else if (inital_char == inital_minus_one) {
                    inital_minus_one = inital_char;
                    char_counter++;
                }

            else {
                inital_minus_one = inital_char;
                printf("%c%d", inital_char,char_counter);
                // Debug printf("Word (IMC): %d \n", inital_minus_one);
                char_counter = 0;
            }     
        }
    }
    return 0;
}

    
    

     if (compress_word_minus_one == "1234") {

    }
    
    else {
        // Case 2 - Filter Char
        if (isprint(compress_word) == 1){
            // Case 1 - Match
            // printf("Isprint is working %c", compress_word);
            if (compress_word == compress_word_minus_one ) {
                compress_word_counter++;
            }
            else {
                // Case 2 - No Match
                if (compress_word_counter >= 2) {
                    // Subcase - Print Out
                    printf("%c%c%d*",compress_word_minus_one,compress_word_minus_one,compress_word_counter);
                    compress_word_minus_one = compress_word;
                    compress_word_counter = 0;
                }
                else {
                    // Subcase 2 - Lower
                    printf("%c",compress_word_minus_one);
                    compress_word_minus_one = compress_word;
                    compress_word_counter = 0;
                }
            }
            compress_word_minus_one = compress_word;
            compress_word_counter++;
        } 
    }

    while (scanf("%c", &inital_char) != EOF) {
        // Debug - printf("Memory Location (IC): %p \n", &inital_char);
        // Debug - printf("Word (IC): %d \n", inital_char);
        // Debug - printf("Word (IMC): %d \n", inital_minus_one);

        printf("Word (IC): %c \n", inital_char);
         
        if (boolean_test_compress == 1) {
            if (inital_char = 'C') {} 
            else if (isalpha(inital_char) == 1) {
                if (inital_char == inital_minus_one) {
                    inital_minus_one = inital_char;
                    char_counter++;
                } else {
                    char_counter++;
                    inital_minus_one = inital_char;
                    printf("%c%d", inital_minus_one,char_counter);
                    // Debug printf("Word (IMC): %d \n", inital_minus_one);
                    char_counter = 0;
                }
            } else {}
        } else {}
        
    }

*/
