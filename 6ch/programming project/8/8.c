//학교 교수님께서 올려주신 솔루션 입니다.

#include <stdio.h>

int main()
{
	int days, start_day, i, j;
	printf("Enter number of days in month: ");
	scanf_s("%d", &days);

	printf("Enter sterting day of the week (1=sun, 7=sat): ");
	scanf_s("%d", &start_day);

	//첫 줄 공백 만들기
	for (i = 1; i < start_day; i++)
		printf("   ");
	
	//달력 만들기
	for (j = 1; j <= days; j++, i++) {
		printf("%3d", j);
		if (i % 7 == 0)
			printf("\n");
	}

	return 0;
}
