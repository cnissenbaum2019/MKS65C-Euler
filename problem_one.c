#include <stdio.h> 

int main()
{
	int ans = 0;

	int x = 0;
	while (x < 1000) {
		ans += x;
		x += 3;
	}

	for (x = 0; x >= 1000; x += 5) {
		ans += x;
	}

	printf("%d\n",ans);

	
	return 0;
}