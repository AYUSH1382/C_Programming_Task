#include<stdio.h>
main()
{
	int i=0,a=0;
	printf("Enter a no\n");
	scanf("%d",&a);
	while(a!=0)
	{
		i=i*10;
		i=i+a%10;
		a=a/10;
	}
	printf("Reverse of number is %d ",i);
	return 0;
}

