/*Anurag Kumar Singh
Peer Graded Assignment: Design a program to calculate value of cosine and sine for X between (0,1)
26 sepetember, 2023
https://www.github.com/anurag-bit
*/

#include<stdio.h>
#include<math.h>



int main(){
    double sine;
    double cosine;

printf("\t Sin\t \tCosine \t \n");
 for ( double i = 0.0; i <= 1; i += 0.1)
 {
    double rSin = sin(i);
    double rCos = cos(i);
printf("\t %lf\t \t%lf \t \n", rSin, rCos);

 }
return 0; 

}