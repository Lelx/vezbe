#include<stdioe.h>
#include<math.h>
main()
{
	int z, c0, c1, c2, n;
	printf("Unesite n: ");
	scanf("%d", &n);
	c0 = n % 10;
	n = n / 10;
	c1 = n % 10;
	c2 = n % 10;
	z = c0 + c1 + c2;
	printf("Zbir cifara je: %d", z);
	return 0;
}