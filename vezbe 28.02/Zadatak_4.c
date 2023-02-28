#include<stdio.h>
main()
{
	int a, b, c, d, n, br;
	printf("Unesite broj n:");
	scanf("%d", &n);
	a= n % 10;
	b= (n%100)/10;
	c= (n%1000)/100;
	d= n/1000;
	br= a*1000+b*100+c*10+d;
	printf("Obrnuti broj %d", br);
	return 0;
}