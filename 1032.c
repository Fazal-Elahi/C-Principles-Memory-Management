/*
* Student ID: 201361872
* Student Name: Fazal Elahi
* Email: sgfelahi@student.liverpool.ac.uk
* User: sgfelahi
* Problem ID: 
* RunID: 
* Result:  
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int repeated_words[125000], max_length = 50;
    char first_string[max_length],second_string[max_length],third_string[max_length];
    

    fgets(first_string,50,stdin);
    fgets(second_string,50,stdin);
    fgets(third_string,50,stdin);

    // Check 1 Against 2&3
    // Check 2 Against 1&3
    // Check 3 Against 1&2

    for (int first_loop = 0; first_loop <= max_length; first_loop++){
        // Loop 1
        for (int second_loop = 0; second_loop <= max_length; second_loop++){
           // Second Loop
           for (int third_loop = 0; third_loop <= max_length; third_loop++){
               
           }
        }
    }
    

    return 0;
}
