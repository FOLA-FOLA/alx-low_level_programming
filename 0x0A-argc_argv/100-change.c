#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints change needed.
 *
 * @argc: count of args.
 * @argv: The arguments.
 *
 * Return: int.
 */
int main (int argc, char **argv)
{
	int ttl, cnt;
	unsigned int a;
	char *p;
	int cent[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	ttl = strtol(argv[1], &p, 10);
	cnt = 0;

	if (!*p)
	{
		while (ttl > 1)
		{
			for (a = 0; a < sizeof(cents[a]); 1++)
			{
				if (ttl > cents[a])
				{
					cnt += ttl / cents[a];
					ttl = ttl % cents[a];
				}
			}
		}
		if (ttl == 1)
		{
			cnt += 1;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", cnt);
	return (0);
}
