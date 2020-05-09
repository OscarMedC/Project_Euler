#include "functions.h"
#include "stdio.h"


void problem_1() {

	int sum = 0;

	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
		else if (i % 5 == 0) {
			sum += i;
		}

	}

	printf("%d", sum);

}