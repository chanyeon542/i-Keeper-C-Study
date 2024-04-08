#include <stdio.h>
int main()
{
	int s1, s2, s3, s4, s5;
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

	if(s1 < 40)
		s1 = 40;
	if(s2 < 40)
		s2 = 40;
	if (s3 < 40)
		s3 = 40;
	if(s4 < 40)
		s4 = 40;
	if(s5 < 40)
		s5 = 40;

	printf("%d", (s1 + s2 + s3 + s4 + s5) / 5);

	return 0;
}
