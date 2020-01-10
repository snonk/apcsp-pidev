#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
int main (int argc, char *argv[])

{
  float r, area, circ;
  char input[256];
  int radius1, radius2;

   if (argc == 1) {
    printf("What is the lower radius?\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%d", &radius1) == 1) break;
        printf("Not a valid radius - try again!");
    }
    printf("What is the upper radius?\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%d", &radius2) == 1) break;
        printf("Not a valid radius - try again!\n");
      if (radius2<radius1) printf("Please ensure the upper bound is greater than or equal to the lower bound.\n");
    }
    
    for (int i = radius1; i <= radius2; i++) {
      printf("Area of circle with radius %i is %f\n", i, i * i * PI);
    }
  }

  else{

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
  }
  return (0);

}
