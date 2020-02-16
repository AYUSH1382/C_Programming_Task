#include<stdio.h>
main()

{
	int i=0,a=0,fac=1;
	printf("Enter a no\n");
	scanf("%d",&a);

	for(i=1;i<=a;i++)
	{
		
		fac=fac*i;
	}
	printf("%d",fac);
}

