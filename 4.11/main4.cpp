#include <stdio.h>

int main() {
	int i = 13, j = 5, temp, a = 10, b = 20, c = 30, d = 40;
	temp = ++i; printf("%d %d\n", temp, j);
	temp = i++; printf("%d %d\n", temp, j);
	temp = --j; printf("%d %d\n", temp, j);
	temp = j--; printf("%d %d\n", temp, j);

	++a; b++; --c; d--;
	return 0;
}
