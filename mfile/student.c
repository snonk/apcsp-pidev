#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "student.h"

void printStudent(struct student* student){
  printf("First Name: %s", student->firstname);
  printf("Last Name: %s", student->lastname);
  printf("Age: %ld\n", student->age);
  printf("Student ID: %ld\n", student->studentid);
}
