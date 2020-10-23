#include <unistd.h>
#include <stdio.h>

char ft_putchar(char c)
{
	write(1, &c, 1);

	return ' ';
}

void printarr(int *p, int size, int column)
{
	for (int i = 0; i < size; i++)
	{
		if (i != 0 && (i % column) == 0)
		{
			printf("\n");
		}
		printf("%d", *p);
		p++;
	}
}

int calcCount(int column, int *arr, int size, int direction)
{
	// view count at left side
	int viewcount = 0;
	int maxHeight = 0;
	int i = 0;
	int j = 0;
	int countAtLeft = 1;
	while (i < column)
	{
		j = 0;
		int index = column * i + column + (column * direction);
		maxHeight = arr[column * i];
		while (j < column)
		{
			index = column * i + j;
			if (maxHeight < arr[index])
			{
				countAtLeft++;
				maxHeight = arr[index];
			};
			++j;
		}
		i++;
		ft_putchar('0' + countAtLeft);
		ft_putchar('\n');
		countAtLeft = 1;
	}

	return countAtLeft;
}