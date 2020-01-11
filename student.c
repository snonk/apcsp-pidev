#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//Student Structure
struct student{
    char firstname[256];
    char lastname[256];
    long int age;
    long int studentid;
  };

//PrintStudent Function
void printStudent(struct student* student){
  printf("First Name: %s", student->firstname);
  printf("Last Name: %s", student->lastname);
  printf("Age: %ld\n", student->age);
  printf("Student ID: %ld\n", student->studentid);
}

int main(){

  int studentcounter = 0;
  struct student studentarray[50]; 

  while(1){
    char charthing[50];

    //Student Name

    printf("Input student first name: ");
    fgets(studentarray[studentcounter].firstname, 256, stdin);

    printf("Input student last name: ");
    fgets(studentarray[studentcounter].lastname, 256, stdin);

    //Student age

    printf("Input student age: ");
    fgets(charthing, 256, stdin);
    while (sscanf(charthing, "%ld", &studentarray[studentcounter].age) == 0) {
        printf("Not a valid age - try again!\nInput student age: ");
       fgets(charthing, 256, stdin); 
    }
    sscanf(charthing, "%ld", &studentarray[studentcounter].age);

    //Student ID

    printf("Input student ID: ");
    fgets(charthing, 256, stdin);
    while (sscanf(charthing, "%ld", &studentarray[studentcounter].studentid) == 0) {
    
        printf("Not a valid student ID - try again!\nInput student ID: ");
        fgets(charthing, 256, stdin);
    }
    sscanf(charthing, "%ld", &studentarray[studentcounter].studentid);

    printf("Would you like to input more students? (y/n)\n");
    fgets(charthing, 256, stdin);

    while ('y' != charthing[0] && charthing[0] !='n' && charthing[0] != 'Y' && charthing[0] != 'N') {
        printf("Please answer y or n.\n");
        fgets(charthing, 256, stdin);
    }

    if (charthing[0] == 'n' || charthing[0] == 'N') {
      for (int i = 0; i <= studentcounter; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printStudent(&studentarray[i]);
      }
      break;
    }

    studentcounter++;

    if (charthing[0] == 'y' ||charthing[0] == 'Y') {
      struct student studentarray[studentcounter];
      continue;
    }
    
    printf("%s", studentarray[0].firstname);

  }
}
