#import<stdio.h>
#import<math.h>
int main()
{
	int a,sum=0,n,temp,i,c=0;
	printf("Enter the number\n");
	scanf("%d",&a);
	
	temp=a;
	while(a!=0)
	{
		c++;
		a=a/10;
		
	}
	a=temp;
	for(i=1;i<=c;i++)
	{
		n=a%10;
		a=a/10;
		sum =sum + pow(n,c);
		
		
	}
	if(sum==temp)
	{
	
	printf("%d is an armstrong number\n",temp);
}
	else{
	
	printf("%d is not an armstrong number\n",temp);
}
	return 0;
	
}
