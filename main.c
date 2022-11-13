#include "ft_printf.h"

int main(void)
{
	int x = 4785;
	// printf("\n%d\n", ft_printf("Hi, my name is %s, i'm %u years old, my address is %p", "ez7mz", 22, &x));
	// printf("\n%d\n", printf("Hi, my name is %s, i'm %u years old, my address is %p", "ez7mz", 22, &x));
	int a  = ft_printf(" %x  ", -2147483648);
	printf("\n");
	int b  = printf(" %x  ", -2147483648);
	printf("\n%d | %d", a, b);
}

	// freopen("/dev/tty", "w", stdout);

	// printf("Dialhom  = %d | dialk = %d", b, a);
