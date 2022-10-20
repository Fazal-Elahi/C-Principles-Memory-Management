/*
* Student ID: 201361872
* Student Name: Fazal Elahi
* Email: sgfelahi@student.liverpool.ac.uk
* User: 
* Problem ID: 
* RunID: 
* Result:  
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    float numerator, denominator,calculation;
    int precision,i;
    char buffer[6000];

    scanf("%f%f%d", &numerator, &denominator, &precision);
    calculation = numerator/denominator;

    // Convert Float to String
    gcvt (calculation, 6000, buffer);
    // Debug - printf("buffer is: %s\n", buffer); 

    for (i = 0; i <= 6000; i++) {
        if (buffer[i] == '.'){
            i = i+precision;
            printf("%c\n",buffer[i]);
            // Debug printf("i value is %d \n",i);
            break;
        }
    } 

    // Debug - printf("numerator: %f | denominator %f | precision %f | calculation %s",numerator,denominator,precision,calculation);
    return 0;
}
