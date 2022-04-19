//ch2. 8번
#include <stdio.h>

int main()
{
	float loan, rate, pay_m, debt;
	int i;

	//출력 및 정보 받아오기
	printf("Enter amount of loan: ");
	scanf_s("%f", &loan);
	printf("Enter interest rate: ");
	scanf_s("%f", &rate);
	printf("Enter monthly payment: ");
	scanf_s("%f", &pay_m);

	//1~3달차 남은 금액 계산하기
	for (i = 1; i <= 3; i++)
	{
		debt = (loan * 0.06) / 12;
		loan = loan - pay_m + debt;
		printf("Balance remaining after %d month payment: %.2f\n", i, loan);
	}

	return 0;
}

