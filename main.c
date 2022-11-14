#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	int x = 4785;
	// printf("\n%d\n", ft_printf("Hi, my name is %s, i'm %u years old, my address is %p", "ez7mz", 22, &x));
	// printf("\n%d\n", printf("Hi, my name is %s, i'm %u years old, my address is %p", "ez7mz", 22, &x));
	int a  = ft_printf("%cs%cs%c", 'c', 'b', 'a');
	int b  = printf("%cs%cs%c", 'c', 'b', 'a');
	printf("\n");
	printf("\n%d | %d", a, b);
}

	// fclose(stdout);
	// freopen("/dev/tty", "w", stdout);
