#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  char input[256];
  int radius1[256], radius2[256];
  int age;
  int pi = 3.1415926535;
 /*
  if (argc == 1) {
    printf("What is the lower radius?\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%i", &radius1) == 1) break;
        printf("Not a valid radius - try again!");
    }
    printf("What is the upper radius?\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%i", &radius2) == 1) break;
        printf("Not a valid radius - try again!");
    }
    for (int i = radius1; i <= radius2; i++) {
      printf("Area of circle with radius %f is %f", i, i * i * pi);
    }
  }

  else {*/
    int lower = atoi(argv[1]);
    int upper = atoi(argv[2]);
    int r = lower;

    while (r <= upper) {
	float area = r * r * pi;
        printf("Area of circle with radius %f is %f", r, area);
	r++;
    }
  //}
}
