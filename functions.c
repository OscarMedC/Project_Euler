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

void problem_2() {

	long int sum = 2;
	int list[35];

	list[0] = 1;
	list[1] = 2;

	for (int i = 2; i < 35; i++) {
		list[i] = list[i - 1] + list[i - 2];

		if (list[i] % 2 == 0) {
			if (list[i] < 4000000) {
				sum += list[i];
			}

		}
	}

	printf("%d\n", sum);

}