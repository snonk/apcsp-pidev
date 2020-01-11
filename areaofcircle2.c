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
        printf("Not a valid radius - try again!\n");
    }
    printf("What is the upper radius?\n");
   
      fgets(input, 256, stdin);
      while (sscanf(input, "%d", &radius2) == 0 || (radius2<radius1)) {
        printf("Not a upper bound - make sure it is an integer greater than the lower bound.\n");
        fgets(input, 256, stdin);
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

  r= lowernum;

  if (lowernum == 0 || uppernum == 0){
    printf("Please enter a positive integer for your radius.\n");
  }

  else if (lowernum>uppernum){
    printf("Your lower bound is greater than your upper bound. Please try again.\n");
  }

  else {

    while (r<=uppernum) {
      area = PI * r * r;
      printf("Area of circle with radius %f is %f\n", r, area);
      r++;
    }

  }
  }
  return (0);

}
