#include<stdio.h>
main() {
	int a, b, c, d, sat, min, sek, u;
	printf("Unesite a, b i c:");
	scanf("%d%d%d", &a, &b, &c);
	printf("Unesite vreme letenja u sek d:");
	scanf("%d", &d);
	u = a*3600+b*60+c+d;
	sat = u/3600;
	sek= u%3600;
	min= sek / 60;
	sek= sek% 60;
	printf("Vreme sletanja %d:%d:%d", sat,min,sek);
	return 0;
}
