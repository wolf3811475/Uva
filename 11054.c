#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	int n, *arr, i;
	long long int ans;

	while ((scanf("%d", &n)) != EOF) {
		if (n == 0) {
			break;
		}
		ans = 0;
		arr = (int*)malloc(n * sizeof(int));
		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		for (i = 0; i < n; i++) {
			if (i != 0) {
				arr[i] += arr[i - 1];
			}
			ans += fabs(arr[i]);
		}
		printf("%lld\n", ans);
	}

	return 0;
}
