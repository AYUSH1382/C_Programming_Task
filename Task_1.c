/*WRITE A C PROGRAM TO READ THE NAME, AGE AND PHONE NUMBER FROM THE USER, STORE THEM IN VARIABLES AND DISPLAY THEM BACK.

*Tip -> Use 3 different variables to store the details and then print them back.
*/
#include<stdio.h>
int main()
{
	int age=0;
	long long int ph=0;
	char name[20];
	printf("Enter Name\n");
    scanf("%s",&name);
	printf("Enter age\n");
	scanf("%d",&age);
	printf("Enter Number\n");
	scanf("%lld",&ph);
	printf("Name:%s \nAge:%d \nPhone Number:%lld",name,age,ph);
	return 0;
	
}
