#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdarg.h>

/**
* divideNums - divides a given list of numbers
*
* @n: number of inputs to divide 
* @*nums: array of numbers to be divided by each other
*
* return: the result from divide the numbers given
*/float divideNums(int n, float *nums)
{
	int i;
	float div;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			div = nums[i];
		}
		else
			div /= nums[i];
	}

	return (div);
}

/**
* num_arr - creates an array with numbers as its elements
* @: takes no arguments
* returns: nothing
*/void num_arr(void)
{
	int n;
	float *arr;
	int i;
	float total;

	total = 0;
	printf("Enter the number of digits you want to divide by each other: ");
	scanf("%d", &n);

	if (n < 1 || n == ' ')
	{
		printf("Number should be grater than Zero!\n");
		num_arr();
	}

	arr = malloc(sizeof(float) * n);
	for (i = 0; i < n; i++)
	{
		if (n == 1)
		{
			scanf("%f", &arr[i]);
			total = arr[i];
			printf("%f", total);
			return;
		}
		else
		{
			printf("---   ");
			scanf("%f", &arr[i]);
			if (arr[i] != arr[n - 1])
				printf("/ \n");
		}
	}
	total = divideNums(n, arr);
	printf("-----------------\n");
	printf("Total = %f \n", total);
	free(arr);
}

void main()
{
	num_arr();
}
