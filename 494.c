#include <stdio.h>
int main(int argc, const char *argv[])
{
	int wordKey = 0, preKey = 1, count = 0;
	char a;
	while ((a = getchar()) != EOF) {
		if (a == '\n') {
			printf("%d\n", count);
			wordKey = 0;
			preKey = 1;
			count = 0;
		}
		if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
			wordKey = 0;
		}
		else {
			wordKey = 1;
		}
		if (wordKey == 0 && preKey == 1) {
			count++;
		}
		preKey = wordKey;
	}

	return 0;
}
