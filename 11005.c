#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(int argc, const char *argv[])
{
	int price[37], ans[37], small, smallK, n, n1, a;
	int i, j, k, tmp;
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++) {
			if (i != 0) {
				printf("\n");
			}
			printf("Case %d:\n", i + 1);
			for (j = 0; j < 36; j++) {
				scanf("%d", &price[j]);
			}
			scanf("%d", &n1);
			for (j = 0; j < n1; j++) {
				scanf("%d", &a);
				small = INT_MAX;
				smallK = 37;
				memset(ans, 0, sizeof(ans));
				for (k = 2; k < 37; k++) {
					tmp = a;
					while (tmp != 0) {
						ans[k] += price[tmp % k];
						tmp /= k;
					}
					if (small >= ans[k]) {
						small = ans[k];
						smallK = k;
					}
				}
				printf("Cheapest base(s) for number %d: ", a);
				for (k = 2; k < smallK; k++) {
					if (ans[k] == small) {
						printf("%d ", k);
					}
				}
				printf("%d\n", smallK);
			}
		}
	}

	return 0;
}
