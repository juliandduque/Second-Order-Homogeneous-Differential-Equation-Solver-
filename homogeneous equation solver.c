/* 	Author: 	Julian Duque
	School:		University of Central Florida
	Program:	homogeneous equation solver.c
	Create a program to solve a homogeneous equation problem */

#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, x, y, r, i, determinant, z;          // Init as floats to approximate decimal points

    printf( "Please make sure the differential equation is in standard form (AY'' + BY' + CY = 0) and has a degree of 2, otherwise this program will not work. \n a is the leading coefficient \n b is the second coefficient \n c is the third coefficient ");

    printf("\n\nA=");                                   // Read in user values
    scanf("%f", &a);
    printf("\nB=");
    scanf("%f", &b);
    printf("\nC=");
    scanf("%f", &c);

    determinant=b*b-4*a*c;                              // calculate the determinant


  if (determinant>0)                                    // Different outputs are determined from comparison between determinant and 0
  {
      x = (-b+sqrt(determinant))/(2*a);
      y = (-b-sqrt(determinant))/(2*a);

      printf("\nThe solution is c1 e ^(x(%.1f)) + c2 e ^(x(%.1f))",x,y);        // 2nd order family of solutions
  }

  else if (determinant==0)
  {
    x = y = -b/(2*a);
     printf("\nThe solution is c1 e^(x(%.1f)) + x c2 e^(x(%.1f))",x,y);
  }


  else
  {
    r= -b/(2*a);
    i = sqrt(-determinant)/(2*a);
    printf("\n The solution is c1 e^(x(%.1f)) Cos((%.1f)x) + c2 e^(x(%.1f)) Sin ((%.1f)x)",r,i,r,i);
  }

    printf ("\n\n Please note that all decimal values are approximated to the first decimal place \n");

    scanf("%f", &z);

    return 0;
}
