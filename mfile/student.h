#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct student{
    char firstname[256];
    char lastname[256];
    long int age;
    long int studentid;
  };

void printStudent(struct student* student);
