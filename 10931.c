#include <stdio.h>
int main(int argc, const char *argv[])
{
	int arr[100] = {0}, i, n, ans;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) {
			break;
		}
		for (i = 0; n != 0; i++) {
			arr[i] = n % 2;
			n /= 2;
		}
		printf("The parity of ");
		ans = 0;
		for (i--; i >= 0; i--) {
			printf("%d", arr[i]);
			if (arr[i] == 1) {
				ans++;
			}
		}
		printf(" is %d (mod 2).\n", ans);
	}

	return 0;
}
