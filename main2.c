#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>


int main()
{
	int count = 0;
	int count1 = 0;
	char a = 's';
	char *str = "Lorai";
	int d = -42;  // test with negatif number -42
	unsigned int u = 247;
	// unsigned int u = 2999483647;
	unsigned int x = 2999483647;
	unsigned int X = 47269;
	int O = 0;


//% OK
	printf("----------%%----------\n");

	// count = printf("%.p\n", NULL);
    // count1 = ft_printf("%.p\n", NULL);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("simon%-%\n");
    // count1 = ft_printf("simon%-%\n");
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("|simon|%-5%|simon|\n");
    // count1 = ft_printf("|simon|%-5%|simon|\n");
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("|simon%-050%|\n");
    // count1 = ft_printf("|simon%-050%|\n");
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("simon%5%\n");
    // count1 = ft_printf("simon%5%\n");
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("simon%c\n", a);
    // count1 = ft_printf("simon%c\n", a);
	// printf("\n%d\n%d\n", count, count1);

// s OK
	// printf("----------s----------\n");

	// count = printf("simon %s\n", str);
    // count1 = ft_printf("simon %s\n", str);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("simon %-s\n", str);
    // count1 = ft_printf("simon %-s\n", str);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("simon %2.7s|\n", str);
    // count1 = ft_printf("simon %2.7s|\n", str);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%.10s\n", str);
    // count1 = ft_printf("%.10s\n", str);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("simon %5.2s\n", str);
    // count1 = ft_printf("simon %5.2s\n", str);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%-5s\n", str);
    // count1 = ft_printf("%-5s\n", str);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%-10ssimon\n", str);
    // count1 = ft_printf("%-10ssimon\n", str);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%-10.10ssimon\n", str);
    // count1 = ft_printf("%-10.10ssimon\n", str);
	// printf("\n%d\n%d\n", count, count1);

// p OK
	// printf("----------p----------\n");

	// count = printf("%p\n", str);
    // count1 = ft_printf("%p\n", str);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%0150p\n", str); // a ne pas forcement gerer
    // count1 = ft_printf("%0150p\n", str);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%-15psimon\n", str);
    // count1 = ft_printf("%-15psimon\n", str);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%*psimon\n", 20, str);
    // count1 = ft_printf("%*psimon\n", 20, str);
	// printf("\n%d\n%d\n", count, count1);

// d / i OK

	// printf("----------------d/i-------------------\n");

	// printf("\n**1**\n");
	// count = printf("%10.5d\n", INT_MAX);
    // count1 = ft_printf("%10.5d\n", INT_MAX);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**2**\n");
	// count = printf("%d\n", INT_MIN);
    // count1 = ft_printf("%d\n", INT_MIN);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**3**\n");
	// count = printf("%-d\n", INT_MIN);
    // count1 = ft_printf("%-d\n", INT_MIN);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**4**\n");
	// count = printf("%d\n", -2147483647 - 1);
    // count1 = ft_printf("%d\n", -2147483647 - 1);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**5**\n");
	// count = printf("%-d\n", -2147483647 - 1);
    // count1 = ft_printf("%-d\n", -2147483647 - 1);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**6**\n");
	// count = printf("%10.5d\n", d);
    // count1 = ft_printf("%10.5d\n", d);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**7**\n");
	// count = printf("sim%-dsim\n", d);
    // count1 = ft_printf("sim%-dsim\n", d);
	// printf("\n%d\n%d\n", count, count1);

	printf("\n**8**\n");
	count = printf("sim%-5dsim\n", d);
    count1 = ft_printf("sim%-5dsim\n", d);
	printf("\n%d\n%d\n", count, count1);

	// printf("\n**9**\n");
	// count = printf("sim%-1dsim\n", d);
    // count1 = ft_printf("sim%-1dsim\n", d);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**10**\n");
	// count = printf("sim%-10.1dsim\n", d);
    // count1 = ft_printf("sim%-10.1dsim\n", d);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**11**\n");
	// count = printf("sim%-10.5dsim\n", d);
    // count1 = ft_printf("sim%-10.5dsim\n", d);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**12**\n");
	// count = printf("sim%10.5dsim\n", d);
    // count1 = ft_printf("sim%10.5dsim\n", d);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**13**\n");
	// count = printf("sim%.5dsim\n", d);
    // count1 = ft_printf("sim%.5dsim\n", d);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**14**\n");
	// count = printf("sim%.5dsim\n", d);
    // count1 = ft_printf("sim%.5dsim\n", d);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**15**\n");
	// count = printf("sim%-10.*dsim\n", 2, d);
	// count1 = ft_printf("sim%-10.*dsim\n", 2, d);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**16**\n");
	// count = printf("sim%-10.*dsim\n", 5, d);
    // count1 = ft_printf("sim%-10.*dsim\n", 5, d);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**17**\n");
	// count = printf("sim%-1.5d\n", d);
    // count1 = ft_printf("sim%-1.5d\n", d);
	// printf("\n%d\n%d\n", count, count1);

	// printf("\n**18**\n");
	// count = printf("%--74.52i%0151.*i\n" ,-296196750,-88,-683739763);//--------------------------------------------
    // count1 = ft_printf("%--74.52i%0151.*i\n" ,-296196750,-88,-683739763);
	// printf("\n%d\n%d\n", count, count1);


// u OK
	// printf("----------u----------\n");

	// count = printf("sim%u\n", u);
    // count1 = ft_printf("sim%u\n", u);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-usim\n", u);
    // count1 = ft_printf("sim%-usim\n", u);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-10usim\n", u);
    // count1 = ft_printf("sim%-10usim\n", u);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-1usim\n", u);
    // count1 = ft_printf("sim%-1usim\n", u);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-10.1usim\n", u);
    // count1 = ft_printf("sim%-10.1usim\n", u);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-10.5usim\n", u);
    // count1 = ft_printf("sim%-10.5usim\n", u);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%10.5usim\n", u);
    // count1 = ft_printf("sim%10.5usim\n", u);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%.5usim\n", u);
    // count1 = ft_printf("sim%.5usim\n", u);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-10.*usim\n", 2, u);
	// count1 = ft_printf("sim%-10.*usim\n", 2, u);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-10.*usim\n", 5, u);
    // count1 = ft_printf("sim%-10.*usim\n", 5, u);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-1.5u\n", u);
    // count1 = ft_printf("sim%-1.5u\n", u);
	// printf("\n%u\n%u\n", count, count1);

// x OK
	// printf("----------x----------\n");

	// count = printf("sim%x\n", x);
    // count1 = ft_printf("sim%x\n", x);
	// printf("\n%x\n%x\n", count, count1);

	// count = printf("sim%-xsim\n", x);
    // count1 = ft_printf("sim%-xsim\n", x);
	// printf("\n%x\n%x\n", count, count1);

	// count = printf("sim%-10xsim\n", x);
    // count1 = ft_printf("sim%-10xsim\n", x);
	// printf("\n%x\n%x\n", count, count1);

	// count = printf("sim%-1xsim\n", x);
    // count1 = ft_printf("sim%-1xsim\n", x);
	// printf("\n%x\n%x\n", count, count1);

	// count = printf("sim%-10.1xsim\n", x);
    // count1 = ft_printf("sim%-10.1xsim\n", x);
	// printf("\n%x\n%x\n", count, count1);

	// count = printf("sim%-10.5xsim\n", x);
    // count1 = ft_printf("sim%-10.5xsim\n", x);
	// printf("\n%x\n%x\n", count, count1);

	// count = printf("sim%10.5xsim\n", x);
    // count1 = ft_printf("sim%10.5xsim\n", x);
	// printf("\n%x\n%x\n", count, count1);

	// count = printf("sim%.5xsim\n", x);
    // count1 = ft_printf("sim%.5xsim\n", x);
	// printf("\n%x\n%x\n", count, count1);

// X OK
	// printf("----------X----------\n");

	// count = printf("sim%X\n", X);
    // count1 = ft_printf("sim%X\n", X);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%-Xsim\n", X);
    // count1 = ft_printf("sim%-Xsim\n", X);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%-10Xsim\n", X);
    // count1 = ft_printf("sim%-10Xsim\n", X);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%-1Xsim\n", X);
    // count1 = ft_printf("sim%-1Xsim\n", X);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%-10.1Xsim\n", X);
    // count1 = ft_printf("sim%-10.1Xsim\n", X);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%-10.5Xsim\n", X);
    // count1 = ft_printf("sim%-10.5Xsim\n", X);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%10.5Xsim\n", X);
    // count1 = ft_printf("sim%10.5Xsim\n", X);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%.5Xsim\n", X);
    // count1 = ft_printf("sim%.5Xsim\n", X);
	// printf("\n%X\n%X\n", count, count1);

// X (cas spéciaux) OK
	// printf("----------special cases X-------------\n");

	// count = printf("sim%.0xsim\n", O);
    // count1 = ft_printf("sim%.0xsim\n", O);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%0.0xsim\n", O);
    // count1 = ft_printf("sim%0.0xsim\n", O);
	// printf("\n%X\n%X\n", count, count1);

// s (cas spéciaux) OK

	// printf("----------special cases s-------------\n");

	// count = printf("simon %.0s\n", str);
    // count1 = ft_printf("simon %.0s\n", str);
	// printf("\n%d\n%d\n", count, count1);

// u (cas spéciaux) OK
	// printf("----------special cases u-------------\n");

	// count = printf("sim%u\n", O);
    // count1 = ft_printf("sim%u\n", O);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%.0usim\n", O);
    // count1 = ft_printf("sim%.0usim\n", O);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%.025usim\n", O);
    // count1 = ft_printf("sim%.025usim\n", O);//deux zero en trop
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%0.0usim\n", O);
    // count1 = ft_printf("sim%0.0usim\n", O);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%.1usim\n", O);//deux zero en trop
    // count1 = ft_printf("sim%.1usim\n", O);
	// printf("\n%X\n%X\n", count, count1);

	// count = printf("sim%-10.2usim\n", O);//deux zero en trop
	// count1 = ft_printf("sim%-10.2usim\n", O);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-10.5usim\n", O);//deux zero en trop
    // count1 = ft_printf("sim%-10.5usim\n", O);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-10.*usim\n", 2, O);//deux zero en trop
	// count1 = ft_printf("sim%-10.*usim\n", 2, O);
	// printf("\n%u\n%u\n", count, count1);

	// count = printf("sim%-10.*usim\n", 5, O);//deux zero en trop
    // count1 = ft_printf("sim%-10.*usim\n", 5, O);
	// printf("\n%u\n%u\n", count, count1);


// tester OK
	// count = printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
    // count1 = ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
    // count1 = ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%-ld\n",-2147483648);
    // count1 = ft_printf("%-d\n",-2147483647 -1);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%-100d\n",-2147483647 -1);;
    // count1 = ft_printf("%-100d\n",-2147483647 -1);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%-100d\n",-2147483647);
    // count1 = ft_printf("%-100d\n",-2147483647);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%100d\n",-2147483647);
    // count1 = ft_printf("%100d\n",-2147483647);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%*x %*X %*i %*u\n", 10, 547, 1, 300, 100, -55, 1, -60);
	// count1 = ft_printf("%*x %*X %*i %*u\n", 10, 547, 1, 300, 100, -55, 1, -60);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%*s %*x %*X %*i %*u\n", 1, "hey", 10, 547, 1, 300, 100, -55, 1, -60);
	// count1 = ft_printf("%*s %*x %*X %*i %*u\n", 1, "hey", 10, 547, 1, 300, 100, -55, 1, -60);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("ultimate4 %*.*x %*.*X\n", 1, 50, 100, 1, 0, 10);
    // count1 = ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 100, 1, 0, 10);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("ultimate2 %*d\n", 1, 5000);
    // count1 = ft_printf("ultimate2 %*d\n", 1, 5000);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%*s\n", 1, "hey");
	// count1 = ft_printf("%*s\n", 1, "hey");
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%*x\n", 10, 54700);
	// count1 = ft_printf("%*x\n", 10, 54700);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%*X\n", 1, 300);
	// count1 = ft_printf("%*X\n", 1, 300);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%*i\n", 10000, -55);
	// count1 = ft_printf("%*i\n", 10000, -55);
	// printf("\n%d\n%d\n", count, count1);

	// count = printf("%*u\n", 1, -60);
	// count1 = ft_printf("%*u\n", 1, -60);
	// printf("\n%d\n%d\n", count, count1);

// system("leaks a.out");
    return(0);
}
