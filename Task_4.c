#include<stdio.h>
main()
{
	char a[10],b[10];
	printf("Enter First Name\n");
	scanf("%s",&a);
	printf("Enter Last Name\n");
	scanf("%s",&b);
	strcat(a, b);
	printf("%s ",a);
	
	
}
