#include <stdio.h>
int main()
{
	int d1, d2, d3;
	scanf("%d %d %d", &d1, &d2, &d3);
	if (d1 == d2 && d2 == d3) {
		printf("%d", 10000 + d1 * 1000);
	}
	else if (d1 == d2) {
		printf("%d", 1000 + d1 * 100);
	}
	else if (d2 == d3) {
		printf("%d", 1000 + d2 * 100);
	}
	else if (d3 == d1) {
		printf("%d", 1000 + d3 * 100);
	}
	else {
		int max = d1;
		if (d2 > max) max = d2;
		if (d3 > max) max = d3;
		printf("%d", max * 100);
	}

	return 0;
}
