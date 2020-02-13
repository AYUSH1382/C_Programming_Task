#include<stdio.h>
main()
{
	float cel=0,far=0;
	printf("Enter temperature in Celsius\n");
	scanf("%f",&cel);
	far=((cel*9)/5)+32;
	printf("Temperature is %f degree",far);
}
