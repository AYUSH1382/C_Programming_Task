
#include<stdio.h>
main()
{
	int m1=0,m2=0,m3=0,sum=0,avg=0;
	printf("Enter marks of 3 subjects\n");
	scanf("%d%d%d",&m1,&m2,&m3);
	sum=m1+m2+m3;
	avg=sum/3;
	printf("Sum : %d\nAverage: %d",sum,avg);
}
