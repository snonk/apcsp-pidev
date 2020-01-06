#include <stdio.h>

float AreaOfCircle (float r) {
	float area = r * r * 3.1415926535;
	return area;
}

int main() {

for (float i=3.5; i<13; i++) {
	float area = AreaOfCircle(i);
	printf("Area of circle with radius %f is %f \n", i, area);
}
}
