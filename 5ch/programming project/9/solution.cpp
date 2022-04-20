//ch.5 9¹ø
#include <stdio.h>
int main()
{
	int m1, d1, y1, m2, d2, y2;
	printf("Enter first date (mm/dd/yy) : ");
	scanf_s("%d/%d/%d", &m1, &d1, &y1);

	printf("Enter second date (mm/dd/yy) : ");
	scanf_s("%d/%d/%d", &m2, &d2, &y2);

	if (y1 * 10000 + m1 * 100 + d1 * 1 > y2 * 10000 + m2 * 100 + d2 * 1)
		printf("%d/%d/%d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
	else
		printf("%d/%d/%d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);

	return 0;
}
