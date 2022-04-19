//ch6. 9번
#include <stdio.h>

int main()
{
	float loan, rate, pay_m, debt, re_pay;
	int i, m;

	//출력 및 정보 받아오기
	printf("Enter amount of loan: ");
	scanf_s("%f", &loan);
	printf("Enter interest rate: ");
	scanf_s("%f", &rate);
	printf("Enter monthly payment: ");
	scanf_s("%f", &pay_m);

	//얼마나 상환했는지 정보 받아오기
	printf("Enter the period of payment (month): ");
	scanf_s("%d", &m);


	for (i = 1; i <= m; i++)
	{
		debt = (loan * 0.06) / 12;  // 이자비용 계산
		re_pay = loan - pay_m + debt;
		loan = re_pay;
		if (m == i)
			printf("Your remaining payment : %.2f", loan);
	}
	return 0;
}
