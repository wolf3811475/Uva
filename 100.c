#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n, n1, i, j, a;
	while (scanf("%d %d", &i, &j) != EOF) {
		printf("%d %d ", i, j);
		a = 0;
		if (j < i) {
			n = i;
			i = j;
			j = n;
		}
		for (; i <= j; i++) {
			n1 = 0;
			n = i;
			while (n != 1) {
				if (n % 2 == 0) {
					n /= 2;
					n1++;
				}
				else {
					n = 3 * n + 1;
					n1++;
				}
			}
			if (a < n1) {
				a = n1;
			}
		}
		printf("%d\n", a + 1);
	}
	return 0;
}
