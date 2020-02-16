#include<stdio.h>
main()
{
	int a=0,b=0,i=0,mul=0;
	printf("Enter the multiplication table to print\n");
	scanf("%d",&a);
	printf("Enter the limit to which to print\n");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		mul=a*i;
		printf("%d * %d = %d\n",a,i,mul);
	}
}
