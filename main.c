#include "ft_printf.h"
int		main() {
	long long i;
	char *str;
	uintmax_t j;

	str = " gfdgfg";
	i = -55599;

	__builtin_printf("|%d\n", ft_printf("%-10.5o", 2500));
	__builtin_printf("|%d", __builtin_printf("%-10.5o", 2500));
	return (0);
}
