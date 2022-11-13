#include "ft_printf.h"

int main(void)
{
	int x = 4785;
	// printf("\n%d\n", ft_printf("Hi, my name is %s, i'm %u years old, my address is %p", "ez7mz", 22, &x));
	// printf("\n%d\n", printf("Hi, my name is %s, i'm %u years old, my address is %p", "ez7mz", 22, &x));
	fclose(stdout);
	int a  = ft_printf("%% %");
	int b  = printf("%% %");

	freopen("/dev/tty", "w", stdout);

	printf("Dialhom  = %d | dialk = %d", b, a);
}
