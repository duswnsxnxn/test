#include <stdio.h>

int main()
{
	int num, i, j;
	printf(" Input = ");
	scanf("%d", &num);
	printf("\n Start!! \n\n");
	if (num%2==0)
	{
		i=0;
		while (i<num/2)
		{
			j=0;
			while (j<=num/2)
			{
				if (i<=j)
					printf("*");
				else
					printf(" ");
				j++;
			}
			j=0;
			while (j<num/2)
			{
				if (i<j)
					printf("*");
				j++;
			}
			printf("\n");
			i++;
		}
		i=1;
		while (i<num/2)
		{
			j=num/2;
			while (j>=0)
			{
				if (j>i+1)
					printf(" ");
				else
					printf("*");
				j--;
			}
			j=0;
			while (j<num/2)
			{
				if (i>j)
					printf("*");
				j++;
			}
			printf("\n");
			i++;
		}
	}
	else
	{
		i=0;
	while (i<num/2+1)
	{
		j=0;
		while (j<num/2+1)
		{
			if (i<=j)
				printf("*");
			else
				printf(" ");
			j++;
		}
		j=0;
		while (j<num/2+1)
		{
			if (j>i)
				printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	i=1;
	while (i<=num/2)
	{
		j=num/2;
		while (j>=0)
		{
			if (j>i)
				printf(" ");
			else
				printf("*");
			j--;
		}
		j=0;
		while (j<=num/2)
		{
			if (j<i)
				printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}

printf("\n End!! \n");
	return (0);
}

			
