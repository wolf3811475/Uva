#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, ans, a[6], tmp, arr[9], total;
	char str[3];
	while ((scanf("%d", &arr[0])) != EOF) {
		total = arr[0];
		for (i = 1; i < 9; i++) {
			scanf("%d", &arr[i]);
			total += arr[i];
		}
		a[0] = arr[0] + arr[5] + arr[7];
		a[1] = arr[0] + arr[4] + arr[8];

		a[2] = arr[2] + arr[3] + arr[7];
		a[3] = arr[2] + arr[4] + arr[6];

		a[4] = arr[1] + arr[3] + arr[8];
		a[5] = arr[1] + arr[5] + arr[6];

		ans = a[0];
		tmp = 0;
		for (i = 1; i < 6; i++) {
			if (ans < a[i]) {
				ans = a[i];
				tmp = i;
			}
		}
		if (tmp == 0 || tmp == 1) {
			printf("B");
			if (tmp == 0) {
				printf("CG");
			}
			else {
				printf("GC");
			}
		}
		else if (tmp == 2 || tmp == 3) {
			printf("C");
			if (tmp == 2) {
				printf("BG");
			}
			else {
				printf("GB");
			}
		}
		else if (tmp == 4 || tmp == 5) {
			printf("G");
			if (tmp == 4) {
				printf("BC");
			}
			else {
				printf("CB");
			}
		}
		printf(" %d\n", total - a[tmp]);
	}

	return 0;
}
