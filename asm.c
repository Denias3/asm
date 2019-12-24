#include "asm.h"

int main(int argc, char **argv)
{
	if (argc == 2 && file_check(argv[argc - 1]))
	{
		ft_printf("OK\n");
	}
	else
	{
		ft_printf("Error\n");
	}
	return 0;
}
