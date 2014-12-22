#include <stdio.h>

int main(int argc, const char *argv[])
{
	int arr[10000] = {0}, i, j, k, n, large = 0, small = 10000;
	arr[0] = 0;
	while (scanf("%d %d %d", &j, &n, &k) != EOF) {
		if (k > large) {
			large = k;
		}
		if (small > j) {
			small = j;
		}
		for (; j < k; j++) {
			if (arr[j] < n) {
				arr[j] = n;
			}
		}
	}
	for (i = small; i < large; i++) {
		printf("%d %d ", i, arr[i]);
		if (arr[i] == arr[i+1]) {
			while (arr[i] == arr[i+1]) {
				i++;
			}
		}
	}
	printf("%d ", i);
	if (arr[i-1] != 0) {
		printf("0");
	}
	printf("\n");


	return 0;
}
