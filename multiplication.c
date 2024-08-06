#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdarg.h>

/**
* multiplyNums - multiplies a given list of numbers
*
* @n: number of inputs to multiplied 
* @*nums: array of numbers to be multiplied by each other
*
* return: the result from multiplying the numbers given
*/int multiplyNums(int n, int *nums)
{
	int i;
	int mul;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			mul = nums[i];
		}
		else
			mul *= nums[i];
	}

	return (mul);
}

/**
* num_arr - creates an array with numbers as its elements
* @: takes no arguments
* returns: nothing
*/
/*void num_arr(void)
{
	int n;
	int *arr;
	int i;
	int total;

	total = 0;
	printf("Enter the number of digits you want to multiply by each other: ");
	scanf("%d", &n);

	if (n < 1 || n == ' ')
	{
		printf("Number should be grater than Zero!\n");
		num_arr();
	}

	arr = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		if (n == 1)
		{
			scanf("%d", &arr[i]);
			total = arr[i];
			printf("%d", total);
			return;
		}
		else
		{
			printf("---   ");
			scanf("%d", &arr[i]);
			if (arr[i] != arr[n - 1])
				printf(" x \n");
		}
	}
	total = multiplyNums(n, arr);
	printf("-----------------\n");
	printf("Total = %d \n", total);
	free(arr);
}

void main()
{
	num_arr();
}*/
