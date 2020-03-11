#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int count, a, b, c, dong, ho;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d %d %d", &a, &b, &c);
		
		if (c % a == 0) {
			ho = c / a - 1;
		}
		else {
			ho = c / a;
		}
		dong = c - a * ho;
		if (ho < 9) {
			printf("%d0%d\n", dong, ho + 1);
		}
		else {
			printf("%d%d\n", dong, ho + 1);
		}
	}
	return 0;
}