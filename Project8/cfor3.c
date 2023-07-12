#include<stdio.h>



void showMultiplication(int step) {
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", step, i, i * step);
	}
}

void main() {
	showMultiplication(13);
}