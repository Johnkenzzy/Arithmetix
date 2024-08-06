#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdarg.h>

/**
* addNums - calculate the sum of a given list of numbers
*
* @n: fixed number 
* @...: array of numbers to be added
*
* return: the sum of numbers given
*/int addNums(int n, int *nums)
{
	int i;
	int sum;

	for (i = 0; i < n; i++)
	{
		sum += nums[i];
	}

	return (sum);
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
	printf("Enter the number of digits you want to sum up: ");
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
				printf(" + \n");
		}
	}
	total = addNums(n, arr);
	printf("-----------------\n");
	printf("Total = %d \n", total);
	free(arr);
}

void main()
{
	num_arr();
}*/
