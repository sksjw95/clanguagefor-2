#include<stdio.h>



void showMultiplication(int step) {
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", step, i, i * step);
	}
}

void main() {

	for (int s = 2; s <= 9; s++) {
		showMultiplication(s);
	}
	
}