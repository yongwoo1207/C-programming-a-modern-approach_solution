//ch6. 9��
#include <stdio.h>

int main()
{
	float loan, rate, pay_m, debt, re_pay;
	int i, m;

	//��� �� ���� �޾ƿ���
	printf("Enter amount of loan: ");
	scanf_s("%f", &loan);
	printf("Enter interest rate: ");
	scanf_s("%f", &rate);
	printf("Enter monthly payment: ");
	scanf_s("%f", &pay_m);

	//�󸶳� ��ȯ�ߴ��� ���� �޾ƿ���
	printf("Enter the period of payment (month): ");
	scanf_s("%d", &m);


	for (i = 1; i <= m; i++)
	{
		debt = (loan * 0.06) / 12;  // ���ں�� ���
		re_pay = loan - pay_m + debt;
		loan = re_pay;
		if (m == i)
			printf("Your remaining payment : %.2f", loan);
	}
	return 0;
}