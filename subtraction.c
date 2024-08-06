#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdarg.h>

/**
* subNums - calculate the subtraction of a given list of numbers
*
* @n: fixed number 
* @...: array of numbers to be subtracted from each other
*
* return: the the remainder from subtracting two/group of numbers given
*/int subtractNums(int n, int *nums)
{
	int i;
	int sub;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			sub = nums[i];
		}
		else
			sub -= nums[i];
	}

	return (sub);
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
	printf("Enter the number of digits you want to subtract from each other: ");
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
				printf(" - \n");
		}
	}
	total = subNums(n, arr);
	printf("-----------------\n");
	printf("Total = %d \n", total);
	free(arr);
}

void main()
{
	num_arr();
}*/
