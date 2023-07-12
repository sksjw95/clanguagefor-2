#include<stdio.h>
// ªÔ¡ﬂforπÆ
void main() {
	for (int i = 2; i <= 4; i++) {
		for (int k = 3; k <= 5; k++) {
			for (int f = 4; f <= 6; f++) {
				printf("%d * %d * %d = %d\n", i, k, f, i * k * f);
			}
		}
	}
}