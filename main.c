#include <stdio.h>
#include <stdlib.h>
#include "operation.h"

void num_arr(void);

void restart_or_quit()
{
	int opt;

	printf("Press 1 to restart process \nPress any other key to quit\n");
	scanf("%d", &opt);
	if (opt == 1)
		num_arr();
	else
		exit(1);
}

/**
* num_arr - creates an array with numbers as its elements
* @: takes no arguments
* returns: nothing
*/void num_arr(void)
{
	int n;
	int *arr;
	int i;
	int operand;
	int answer = 0;
	char *operation[4] = {"sum up", "substract", "multiply", "divide"};
	char sym[4] = {'+', '-', 'x', '/'};
	char *optr;
	char sign;

	printf("Choose an operation:\n");
	printf("1 - Addition \n2 - Subtraction \n3 - Multiplication \n4 - Division \n\n=================  ");
	scanf("%d", &operand);

	if (operand < 1 || operand > 4)
	{
		printf("Enter a valid operation number\n");
		restart_or_quit();
	}
	if (operand == 1)
	{
		optr = operation[0];
		sign = sym[0];
	}
	if (operand == 2)
	{
		optr = operation[1];
		sign = sym[1];
	}
	if (operand == 3)
        {
                optr = operation[2];
                sign = sym[2];
        }
        if (operand == 4)
        {
                optr = operation[3];
                sign = sym[3];
        }

	printf("Enter the number of digits you want to %s: ", optr);
	scanf("%d", &n);

	if (n < 1 || n == ' ')
	{
		printf("Number should be grater than Zero!\n");
		restart_or_quit();
	}

	arr = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		if (n == 1)
		{
			scanf("%d", &arr[i]);
			answer = arr[i];
			printf("%d", answer);
			return;
		}
		else
		{
			printf("---   ");
			scanf("%d", &arr[i]);
			if (arr[i] != arr[n - 1])
				printf(" %c \n", sign);
		}
	}

	switch (operand)
	{
		case 1:
                        answer = addNums(n, arr);
                        break;
                case 2:
                        answer = subtractNums(n, arr);
                        break;
                case 3:
                        answer = multiplyNums(n, arr);
                        break;
                case 4:
                        answer = divideNums(n, arr);
                        break;
                default:
                        {
                        printf("Invalid operation type! \n");
                        restart_or_quit();
                        break;
                        }
	}
	printf("-----------------\n");
	printf("Total = %d \n", answer);
	free(arr);
	restart_or_quit();
}

void main()
{
	num_arr();
}
