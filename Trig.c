/*Anurag Kumar Singh
Peer Graded Assignment: Design a program to calculate value of cosine and sine for X between (0,1)
26 sepetember, 2023
https://www.github.com/anurag-bit
*/


// Pre_processor directive
#include<stdio.h>
#include<math.h>

//program entry point!
int main(){
// variable declaration 
    double sine;
    double cosine;

printf("\t Sin\t \tCosine \t \n");
// flow control logic for range definition of input/plugin value of functions, precisely in sin and cos! 
 for ( double i = 0.0; i <= 1; i += 0.1)
 {
    //iterative execution of instruction-------------->
    double rSin = sin(i);
    double rCos = cos(i);
printf("\t %lf\t \t%lf \t \n", rSin, rCos);

 }
// program exit point!
return 0; 

}