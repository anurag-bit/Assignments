// Peer graded Assignment
/*Anurag Kumar Singh
  Correct Dr. P's mistake, sine absolute value! 
    26, September 2023
    https://www.github.com/anurag-bit
 */ 

//Preprocessor Directive
#include <stdio.h>
#include <math.h> /* has  sin(), abs(), and fabs() */


// main function! 
int main(void)
{
    double interval;// variable Declaration.
    double absolute;
    int i;
    // for- loop 
    for (i = 0; i < 30; i++)
    {
        interval = i / 10.0;
        absolute = sin(interval);//encapsulating 
        printf("\nsin(%lf) = %lf \n\t", interval, absolute);
    }

    printf("\n+++++++++++++\n");
    return 0;
}