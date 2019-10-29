
//#include "Header.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, number_now = 0, sum = 0;
	printf("\nEnter a number: ");
	scanf("%d", &N);
	sum = ((2 * number_now + N - 1) * N) / 2;
	printf("\nSum = %d", sum);
	return 0;
}