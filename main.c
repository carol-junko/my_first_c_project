/* my first c project */

#include <unistd.h>

void	print_hello(void)
{
	write(1, "Hello, Carolina!\n", 17);
}

int	main(void)
{
	print_hello();
	return (0);
}

