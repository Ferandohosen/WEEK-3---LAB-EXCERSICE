//Code untuk soal B (linear equations)
#include <stdio.h>
#include <math.h>

int main(){
  double a11 = 3;
  double a12 = 12.5;
  double a21 = 4.2;
  double a22 = -6.3;
  double c1 = 22.5;
  double c2 = 30;
  
  double D;
  double x1;
  double x2;

  D = (a11 * a22) - (a12 * a21); 

  x1 = ((c1 * a22) - (a12 * c2)) / D;
  x2 = ((a11 * c2) - (c1 * a21)) / D;

  printf("Nilai x1 = %lf\n", x1); //hasil x1 = 7.237395
  printf("Nilai x2 = %lf", x2); //hasil x2 = 0.063025

  return 0;
  
}
