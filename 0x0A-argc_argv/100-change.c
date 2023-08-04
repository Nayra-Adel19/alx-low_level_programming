#include <stdio.h>
#include <stdlib.h>

/**
 * main -> prints the min num of coins
 *@argc: num
 *@argv: arr
 *Return: 0 Success
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int b, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};


		for (b = 0; b < 5; b++)
		{
			if (money >= cents[b])
			{
				leastcents += money / cents[b];
				money = money % cents[b];

				if (money % cents[b] == 0)
				{
					break;
				}

			}
		}		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}	return (0);

}
