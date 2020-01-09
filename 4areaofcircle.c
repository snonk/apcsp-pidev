#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
int main (int argc, char *argv[])

{
  float r, area, circ;

  char *lower = argv[1];
  int lowernum = atoi(lower);
  char *upper = argv[2];
  int uppernum = atoi(upper);
/*
  if (argc < 4 || argc > 5)  
    { 
        printf("enter 4 arguments only eg.\"filename arg1 arg2 arg3!!\""); 
        return 0; 
    } */

  printf("You have entered %d and %d", lowernum, uppernum);

  r= lowernum;

  while (r<=uppernum) {
    area = PI * r * r;
    printf("Area of circle with radius %f is %f\n", r, area);
    r++;
  }

  return (0);

}
