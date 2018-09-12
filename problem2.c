#include <stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int c = 0;
	int ans = 0;

	while (a < 4000000) {
		c = a;
		a += b;
		b = c;

		if (a % 2 == 0)
		{
			ans += a;
		}

	}

	printf("%d\n", ans);

	return 0;
}