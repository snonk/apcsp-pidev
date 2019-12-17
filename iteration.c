#include <stdio.h>

int main()
{
	for (int i=1; i<=100; i++) {
		if (i % 4 == 0) {
			printf("%d is divisible by 4\n", i);
		}
	}
}
