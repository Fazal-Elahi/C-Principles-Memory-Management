/*
* Student ID: 201361872
* Student Name: Fazal Elahi
* Email: sgfelahi@student.liverpool.ac.uk
* User: sgfelahi
* Problem ID: 1018
* RunID: 
* Result:  
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *memory_pointer = (char*)calloc(101,sizeof(char));
    // Debug - printf("Please Enter your Striing: \n");

    fgets(memory_pointer,101, stdin);
    // Debug - printf("My Input is: %s\n", memory_pointer);

    for (int i = 101; i >= 0; i--) {
        printf("%c", memory_pointer[i]);
    }

    printf("\n");
    free(memory_pointer);  
    return 0;
}
