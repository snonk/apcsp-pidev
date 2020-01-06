#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 4;
  float e = 5;

  printf("d=%f, e=%f\n Address of d is %i. Address of e is %i\n", d, e, &d, &e);
  
  float* ptrtod = &d;
  float* ptrtoe = &e;

  float temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;

  printf("d=%f, e=%f\n Address of d is %i. Address of e is %i\n", d, e, &d, &e);

}
