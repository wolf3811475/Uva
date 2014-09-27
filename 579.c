#include <stdio.h>
int main(int argc, const char *argv[])
{
	int i, h, m;
	float ans;
	char a;
	while (1) {
		h = 0;

		while (1) {
			a = getchar();
			if (a == ':') {
				break;
			}
			h = h * 10 + (a-'0');
		}
		scanf("%d", &m);

		a = getchar();

		if (h == 0 && m == 0) {
			break;
		}

		ans = (12-h)*30 + m*6 - (float)m/2;

		while (ans > 180) {
			ans -= 360;
		}
		if (ans < 0) {
			ans *= -1;
		}

		printf("%.3f\n", ans);
	}
	return 0;
}
