#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (a != 0)
  {
    printf("a is not 0\n");
  }
  else
  {
    printf("a is not not 0\n");
  }
  if (a > 0)
  {
    printf("a is greater than 0\n");
  }
  else
  {
    printf("a is not greater than 0\n");
  }
  if (a < 0)
  {
    printf("a less than 0\n");
  }
  else
  {
    printf("a is not less than 0\n");
  }
  if (a >= 0)
  {
    printf("a is greater than or equal to 0\n");
  }
  else
  {
    printf("a is not greater than or equal to 0\n");
  }
  if (a <= 0)
  {
    printf("a is less than or equal to 0\n");
  }
  else
  {
    printf("a is not less than or equal to 0\n");
  }
  if (a == 0 && b==0)
  {
    printf("a is equal to 0 and b is equal to 0\n");
  }
  else
  {
    printf("either a or be is not equal to 0\n");
  }
  if (a == 0 || b == 0)
  {
    printf("a is 0 or b is 0\n");
  }
  else
  {
    printf("a is not 0 and b is not 0\n");
  }
  if (!(a == 0))
  {
    printf("a is not 0\n");
  }
  else
  {
    printf("a is not not 0\n");
  }
}
