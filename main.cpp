#include <stdio.h>
#include "func.h"

int main()
{
	int iSum = sum(3, 5);
	printf("3 + 5 = %d.\n", iSum);

	int iValue = minus(5, 3);
	printf("5 - 3 = %d\n", iValue);

	return 0;
}