#include <stdio.h>
int main(int argc, const char *argv[])
{
	int i, tmp, n;
	char a;

	while (scanf("%d", &n) != EOF) {
		if (n == 0) {
			break;
		}
		getchar();

		int row[3] = {2, 1, 5}, column[3] = {3, 1, 4}, bottom = 6;

		for (i = 0; i < n; i++) {

			a = getchar();
			tmp = bottom;
			if (a == 's') {
				bottom = row[2];
				row[2] = row[1];
				row[1] = row[0];
				row[0] = tmp;
				column[1] = row[1];

			}
			else if (a == 'n') {
				bottom = row[0];
				row[0] = row[1];
				row[1] = row[2];
				row[2] = tmp;
				column[1] = row[1];
			}
			else if (a == 'e') {
				bottom = column[2];
				column[2] = column[1];
				column[1] = column[0];
				column[0] = tmp;
				row[1] = column[1];
			}
			else if (a == 'w') {
				bottom = column[0];
				column[0] = column[1];
				column[1] = column[2];
				column[2] = tmp;
				row[1] = column[1];
			}

			while (a != 10) {
				a = getchar();
			}
		}
		printf("%d\n", row[1]);
	}

	return 0;
}
