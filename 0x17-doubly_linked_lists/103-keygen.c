#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - find biggest num
 *@usrn: usrn
 *@len: len usrn
 *Return: biggest num
 */

int f4(char *usrn, int len)
{
	int ch;
	int vc;

	unsigned int rand_num;

	ch = *usrn;

	vc = 0;

	while (vc < len)
	{
		if (ch < usrn[vc])
		{
			ch = usrn[vc];

		}		vc += 1;

	}	srand(ch ^ 14);

	rand_num = rand();

	return (rand_num & 63);

}

/**
 * f5 - mult each char usrn
 *@usrn: usrn
 *@len: len usrn
 *Return: mul char
 */

int f5(char *usrn, int len)
{
	int ch;

	int vc;

	ch = vc = 0;

	while (vc < len)
	{
		ch = ch + usrn[vc] * usrn[vc];

		vc += 1;

	}	return (((unsigned int)ch ^ 239) & 63);

}

/**
 * f6 -> generat andom char
 *@usrn: usrn
 *Return: rand char
 */

int f6(char *usrn)
{
	int ch;
	int vc;

	ch = vc = 0;

	while (vc < *usrn)
	{
		ch = rand();

		vc += 1;

	}	return (((unsigned int)ch ^ 229) & 63);

}

/**
 * main -> poi
 *@argc: arg count
 *@argv: arg vector
 *Return: 0
 */

int main(int argc, char **argv)
{
	char keygen[7];

	int ln, ch, vc;

	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };

	(void) argc;

	for (ln = 0; argv[1][ln]; ln++)
		;

	keygen[0] = ((char *)alph)[(ln ^ 59) & 63];

	ch = vc = 0;
	while (vc < ln)
	{
		ch = ch + argv[1][vc];
		vc = vc + 1;

	}	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	ch = 1;
	vc = 0;

	while (vc < ln)
	{
		ch = argv[1][vc] * ch;
		vc = vc + 1;
	}	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	keygen[3] = ((char *)alph)[f4(argv[1], ln)];
	keygen[4] = ((char *)alph)[f5(argv[1], ln)];
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';

	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
