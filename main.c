#include "ft_printf.h"

int main(void)
{
	int x = 4785;
	printf("Hi, my name is %s, i'm %d years old, my address is %p\n", "ez7mz", 22, &x);
	ft_printf("Hi, my name is %s, i'm %d years old, my address is %p", "ez7mz", 22, &x);
}
