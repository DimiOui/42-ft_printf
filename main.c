//#include"ft_printf.h"
int	ft_printf(const char * format, ...);
#include<stdio.h>
#define KNRM  "\x1B[0m"
#define KYEL  "\x1B[33m"
#define KCYN  "\x1B[36m"
#define KGRN  "\x1B[32m"
#define KRED  "\x1B[31m"
#define KMAG  "\x1B[35m"

int	main(void)
{
	unsigned int	max_uint;
	int				max_int;
	int				min_int;
	unsigned long	max_ulong_int;
	unsigned long	min_ulong_int;
	int				ret1;
	int				ret2;

	max_uint = 4294967295;
	max_int = 2147483647;
	min_int = -2147483648;
	max_ulong_int = 4294967295;
	min_ulong_int = 0;

	// percent
	printf(KMAG "DISPLAY PERCENT :\n" KNRM);
	ret1 = printf(KYEL "je me donne a 42%%\n" KNRM);
	ret2 = ft_printf(KCYN "je me donne a 42%%\n" KNRM);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);


	// char
	printf(KMAG "DISPLAY ONE CHAR :\n" KNRM);
	ret1 = printf(KYEL "%cou%cou\n" KNRM, 'c', 'c');
	ret2 = ft_printf(KCYN "%cou%cou\n" KNRM, 'c', 'c');
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	// str
	printf(KMAG "DISPLAY STRING :\n" KNRM);
	ret1 = printf(KYEL "coucou les %s et %s\n" KNRM, "potes", "les autres potes");
	ret2 = ft_printf(KCYN "coucou les %s et %s\n" KNRM, "potes", "les autres potes");
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "coucou %s coucou\n" KNRM, (char *)NULL);
	ret2 = ft_printf(KYEL "coucou %s coucou\n" KNRM, (char *)NULL);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	// int
	printf(KMAG "DISPLAY INT :\n" KNRM);
	ret1 = printf(KYEL "je me donne a %i pourcents, voire %d pourcents\n" KNRM, 42, -42);
	ret2 = ft_printf(KCYN "je me donne a %i pourcents, voire %d pourcents\n" KNRM, 42, -42);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "l'int max c'est %i\n" KNRM, max_int);
	ret2 = ft_printf(KCYN "l'int max c'est %i\n" KNRM, max_int);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "0 = %i\n" KNRM, 0);
	ret2 = ft_printf(KCYN "0 = %i\n" KNRM, 0);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "l'int min c'est %i\n" KNRM, min_int);
	ret2 = ft_printf(KCYN "l'int min c'est %i\n" KNRM, min_int);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	// uint
	printf(KMAG "DISPLAY UNSIGNED INT :\n" KNRM);
	ret1 = printf(KYEL "je me donne a %u pourcents, voire %u pourcents\n" KNRM, 42, -42);
	ret2 = ft_printf(KCYN "je me donne a %u pourcents, voire %u pourcents\n" KNRM, 42, -42);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "l'uint max c'est %u\n" KNRM, max_uint);
	ret2 = ft_printf(KCYN "l'uint max c'est %u\n" KNRM, max_uint);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "0 = %u\n" KNRM, 0);
	ret2 = ft_printf(KCYN "0 = %u\n" KNRM, 0);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL " %u " KNRM, 10);
	printf("\n");
	ret2 = ft_printf(KCYN " %u " KNRM, 10);
	printf("\n");
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	// hex
	printf(KMAG "DISPLAY HEXADECIMAL :\n" KNRM);
	ret1 = printf(KYEL "je me donne a %x pourcents, voire %X pourcents\n" KNRM, 42, 42);
	ret2 = ft_printf(KCYN "je me donne a %x pourcents, voire %X pourcents\n" KNRM, 42, 42);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "je me donne a %x pourcents, voire %X pourcents\n" KNRM, -42, -42);
	ret2 = ft_printf(KCYN "je me donne a %x pourcents, voire %X pourcents\n" KNRM, -42, -42);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "l'int max c'est %x\n" KNRM, max_uint);
	ret2 = ft_printf(KCYN "l'int max c'est %x\n" KNRM, max_uint);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "0 = %x\n" KNRM, 0);
	ret2 = ft_printf(KCYN "0 = %x\n" KNRM, 0);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "l'int min c'est %x\n" KNRM, min_int);
	ret2 = ft_printf(KCYN "l'int min c'est %x\n" KNRM, min_int);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	// ptr
	printf(KMAG "DISPLAY POINTER :\n" KNRM);
	char *str = "ma maison";
	ret1 = printf(KYEL "l'adresse de ma maison %p\n" KNRM, str);
	ret2 = ft_printf(KCYN "l'adresse de ma maison %p\n" KNRM, str);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);

	ret1 = printf(KYEL "chez les null :%p\n" KNRM, NULL);
	ret2 = ft_printf(KCYN "chez les null :%p\n" KNRM, NULL);
	if (ret1 == ret2)
		printf(KGRN "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	else
		printf(KRED "printf - %i || ft_printf - %i\n\n" KNRM, ret1, ret2);
	return (0);
}
