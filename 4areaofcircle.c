#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
int main (int argc, char *argv[])

{
  float r, area, circ;

  if (argc == 2 || argc > 3)  
    {
       printf("Please enter both an upper and a lower bound only.\n"); 
        return 0;
    }


  char *lower = argv[1];
  int lowernum = atoi(lower);
  char *upper = argv[2];
  int uppernum = atoi(upper);


  printf("You have entered %d and %d\n", lowernum, uppernum);

  r= lowernum;

  while (r<=uppernum) {
    area = PI * r * r;
    printf("Area of circle with radius %f is %f\n", r, area);
    r++;
  }

  return (0);

}
