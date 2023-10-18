#include <stdio.h>

void	ft_write(int **b)
{
	int a = 100;
	*b = &a;
}

int main()
{
	int a = 5;
	int *b = &a;
	ft_write(&b);
	printf("%d", a);
}

// char *(str + 1)
// str[1];
// 1[str];