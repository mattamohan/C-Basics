#include<stdio.h>
void main()
{
	float p, t, r, si;
	printf("principal");
	scanf("%f", &p);
	printf("time in years");
	scanf("%f", &t);
	printf("rate of interest");
	scanf("%f", &r);
	si=(p*t*r)/100;
	printf("simple interest=%f",si);
	
	
}
