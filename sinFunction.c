/*
Peer Graded Assignment: Write a program to compute and print sine function values.
Anurag Kumar Singh
7th September, 2023
https://www.github.com/anurag-bit
*/
#include <math.h>
#include <stdio.h>
#define PI 3.14159265359

int main()
{
    int choice;
    double radian, y, degree, radian_conversion, degree_result; // variable Decleration
    printf("\n-------Sine Function Evaluator--------\n");       // user-interface
    printf("\n Please select your input method\n1.Radian\n2.Degree\n3.Exit\n");
    scanf("%d", &choice); // recording input

    switch (choice)
    {
    case 1:
        /* The following code block implements the case for radian selection as input by the user*/
        printf("\nPlease enter a value in Radian: ");                     // standard instruction for User input.
        scanf("%lf", &radian);                                            // value input capture and pointer address registeration.
        y = sin(radian);                                                  // compute logic for sin function.
        printf("\n The value of X under sine function is: %lf\a\a\a", y); // printing result.
        break;
    case 2:
        /*The following code block inplements the case for degree selection as the input by the user*/
        printf("\nPlease Enter a value in Degree:  ");                                    // standard instruction for User input.
        scanf("%lf", &degree);                                                            // value input capture and pointer address registeration.
        radian_conversion = degree * PI / 180.0;                                          // conversion of the input value(which is in degree) to radians.
        degree_result = sin(radian_conversion);                                           // encapsulating the result into a variable after computation.
        printf("\n The value of given under sine function is: %lf\a\a\a", degree_result); // printing the result.
        break;

    case 3:
        printf("\n The Application has exited successfully\n\a\a\a"); // program exit message.
        break;
    }

    return 0;
}
