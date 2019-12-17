#include <stdio.h>

int main()
{
  int a = 545;
  char b = 'b';
  float c = 1.23;
  double d = 45.67;
  unsigned int e = 80;
  short int f = 21;


  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %c and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %f and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %d bytes\n", d, sizeof(d));
  printf("unsigned int e value: %u and size: %d bytes\n", e, sizeof(e));
  printf("short int f value: %d and size: %d bytes\n", f, sizeof(f));

}

