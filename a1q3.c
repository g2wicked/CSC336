#include <stdio.h>
#include <math.h>

int main(void) {

	float m;
	int k;

	// Header
	printf("k\tm\tcos(2*m*pi)\t2*m*pi");
	// Loop through values
	for(k = 0; k <= 20; k++) {
		m = pow(10, k);
		printf("\n%d\t%.15E\t%.15E\t%.15E", k, m, cos(2*m*M_PI), 2*m*M_PI);
	}
return 0;
}
