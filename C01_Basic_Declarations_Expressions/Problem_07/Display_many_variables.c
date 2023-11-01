// #Write a C program to display multiple variables.
// Sample Variables : a + c, x + c, dx + x, ((int)dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
// Declaration : int a = 125, b = 12345;
// long ax = 1234567890;
// short s = 4043;
// float x = 2.13459;
// double dx = 1.1415927;
// char c = 'W';
// unsigned long ux = 2541567890;

#include <stdio.h>

int main()
{

  int a = 125;
  int b = 12345;
  long ax = 1234567890;
  short s = 4043;
  float x = 2.13459;
  double dx = 1.1415927;
  char c = 'W';
  unsigned long ux = 2541567890;

  printf("a + c = %d \n", a + c);
  printf("x + c = %f \n", x + c);
  printf("dx + c = %f \n", dx + x);
  printf("((int)dx) + ax = %ld \n", ((int)dx) + ax);
  printf("a + x = %f \n", a + x);
  printf("s + b = %d \n", s + b);
  printf("ax + b = %ld \n", ax + b);
  printf("s + c = %d \n", s + c);
  printf("ax + c = %ld \n", ax + c);
  printf("ax + ux = %ld \n", ax + ux);

  return 0;
}