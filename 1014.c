/*
* Student ID: 201361872
* Student Name: Fazal Elahi
* Email: sgfelahi@student.liverpool.ac.uk
* User: sgfelahi
* Problem ID: 1014
* RunID: 
* Result:  
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi (3.14)

float sumofareas(int radius_two){
    float sumofareas=0, area_of_radius_one=0;
    int logic_gate = 0, radius_one = 0;

    // Calculate Nth posibility then R2 is Met
    while (logic_gate != 1) {
        if (radius_one == radius_two) {
            logic_gate = 1;
        } else {
            area_of_radius_one = pi*radius_one*radius_one;
            sumofareas = sumofareas + area_of_radius_one;
            radius_one++;
            // Debug
            printf("Radius One:%d Area: %f\n",radius_one, area_of_radius_one);
        }        
    }

    // Debug printf("One: %d, Two: %d",radius_one, radius_two); 
    // Debug printf("Testing: %f",sumofareas);
    return sumofareas;
}

float sumofcircumference(int radius_two){
    float sum_of_circumference = 0, circumference_of_radiusone = 0;
    int logic_gate = 0, radius_one = 0;

    while (logic_gate != 1) {
        if (radius_one == radius_two) {
            logic_gate = 1;
        } else {
            circumference_of_radiusone = 2 * pi * radius_one;
            sum_of_circumference = sum_of_circumference + circumference_of_radiusone;
            radius_one++;
            // Debug - printf("Radius One:%d Circum: %f\n",radius_one, circumference_of_radiusone);
        }
    }
    // Calculate Nth posibility then R2 is Met
     
    return sum_of_circumference;
}

int main(int argc, char const *argv[]) {
    int radius_one, radius_two;
    float area, circumference;

    scanf("%d %d", &radius_one, &radius_two);

    if (radius_one != radius_two) {
        // Debug - Check Input Begin Passed - printf("One: %d, Two: %d",radius_one, radius_two);
        area = sumofareas(radius_two);
        circumference = sumofcircumference(radius_two);   
    }
    printf("%0.3f %0.3f \n", circumference, area);
    return 0;
}
