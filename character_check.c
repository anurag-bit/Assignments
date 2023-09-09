/*
Peer Graded Assignments
Create A C program that enables you input a file and  print a summary of the ascii character present.
9Th September, 2023
Anurag Kumar singh
https://www.github.com/anurag-bit
*/

#include <stdio.h> //Preprocessor Directive include standard library

int main(void) // primary funtion scope declaration that takes void Arguments.
{
    int blanks = 0, letters = 0, numbers = 0, others = 0; // variable declaration for the character stat place holder, also initialised to 0
    int c;                                                // variable place holder  for memory allocation for input file, which is similar to file object instance in python.

    while (c = getchar() != EOF) // an interative statement "while" that implemets, "getchar()" function from standard library

    /*here the interative while statement, takes in the input from the command line [using "getchar()"]
     and then check iterative condition to execute the code block below till reaches the end of file, which a -1 in integer,
     i.e: end of scope of ASCII, this end of file detection is done by this logical operation of " != EOF". */
    // bear in mind EOF is predefined in std. library

    { // start of interative code block, when condition above evaluates to true!

        if (c == ' ')                                          // logical operation of file charater evaluated for blanks as per thier ASCII sequence.
            ++blanks;                                          // auto-increment blanks place holder valuation.
        else if (c >= '0' && c <= '9')                         // a short circuit logical evaluation of C (the file object being in range of ASCII numerical range).
            ++numbers;                                         // auto-increment number place holder for numbers being true.
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') // a compound short circuit logical evaluation for Alphabet range in ASCII sequence
            ++letters;                                         // auto increment on evaluation being true interatively.
        else
        {
            ++others; // for "other cases" auto-increment others.
        }
    };

    printf("\n The Files has the following charater stats: \n");                                                               // printing Result strcuture.
    printf("\nThe file contains:\n letters:%d\nBlanks:%d\nnumbers:%d\nOther characters:%d", letters, blanks, numbers, others); // printing results.
}
