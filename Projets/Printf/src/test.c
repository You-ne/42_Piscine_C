#include "../inc/ft_printf.h"
size_t		ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (s)
	{
		while (*s++)
			len++;
	}
	return (len);
}

int	test(const char *format, ...)
{
	char		*s;
	va_list		args;

	va_start(args, format);
	s = va_arg(args, char*);
	printf("%s\n", format);
	if (s)
		printf("Len: %li", ft_strlen(s));
	return (0);
}

int	main(void)
{
	char *s;
	
	s = NULL;
	test("test", s);
	return (0);
}


