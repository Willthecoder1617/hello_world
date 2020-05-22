#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define TAX_AMOUNT1 9700.0
#define TAX_AMOUNT2 39475.0
#define TAX_AMOUNT3 84200.0
#define TAX_AMOUNT4 160725.0
#define TAX_AMOUNT5 204100.0
#define TAX_AMOUNT6 510300.0
#define TAX_RATE1 .10
#define TAX_RATE2 .12
#define TAX_RATE3 .22
#define TAX_RATE4 .24
#define TAX_RATE5 .32
#define TAX_RATE6 .35
#define TAX_RATE7 .37



int main(void) {

	double income;
	double taxAmount;


	printf("Please enter your income level: \n");

	scanf("%lf", &income);

	if (income <= 0) {
		printf("Error, invaild income enter....\n");
	}

	else if (income < TAX_AMOUNT1) {
		taxAmount = income * TAX_RATE1;
	}

	else if (income < TAX_AMOUNT2){
		taxAmount = 970.0 + (income-TAX_AMOUNT1) * TAX_RATE2;
	}
	else if (income < TAX_AMOUNT3){
		taxAmount = 4543.0 + (income - TAX_AMOUNT2) * TAX_RATE3;
	}
	else if (income < TAX_AMOUNT4) {
		taxAmount = 14382.5 + (income - TAX_AMOUNT3) * TAX_RATE4;
	}
	else if (income < TAX_AMOUNT5) {
		taxAmount = 32748.5 + (income - TAX_AMOUNT4) * TAX_RATE5;
	}
	else if (income < TAX_AMOUNT6) {
		taxAmount = 46628.5 + (income - TAX_AMOUNT5) * TAX_RATE6;
	

	}

	else {
		taxAmount = 153798.5 + (income - TAX_AMOUNT6) * TAX_RATE7;
	}

	printf("Your owe $%7.2f in taxes to the federal government!\n",taxAmount);

	system("PAUSE");
	return 0;
}