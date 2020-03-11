
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main() {
	double a, b, c, first, second, third;
	double i = 0, k = 0;
	for (i = 0;; i++) {
		scanf("%lf %lf %lf", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a >= b) {
			first = a;
			if (first <= c) {
				first = c;
				second = a;
				third = b;
			}
			else if (b >= c) {
				second = b;
				third = c;
			}
			else {
				second = c;
				third = b;
			}
		}
		else {
			first = b;
			if (first <= c) {
				first = c;
				second = b;
				third = a;
			}
			else if (a >= c) {
				second = a;
				third = c;
			}
			else {
				second = c;
				third = a;
			}
		}
		if (pow(second, 2) + pow(third, 2) == pow(first, 2)) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
	}

	return 0;
}


