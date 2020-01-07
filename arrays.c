#include <stdio.h>

void arrayAdd(int arr[], int s, int n) {
	for (int i = 0; i < s; i++) {
		*(arr+i) = *(arr+i) + n;
	}
}

int main()
{

printf("First Array\n:");

int array[100];
for (int i = 0; i < 100; i++) {
	array[i] = i*i;
	printf("%d\t", array[i]);
}

//Runs arrayAdd function and prints.
printf("\nNew Array:\n");
arrayAdd(array, 100, 5);

for (int i = 0; i < 100; i++) {
	printf("%d\t", *(array+i));
}

printf("\n");

}
