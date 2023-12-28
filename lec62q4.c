#include<stdio.h>

void main()
{
	int n1=0,n2=1,n3,number;
	printf("enter the number");
	scanf("%d",&number);

	printf("%d\n%d\n",n1,n2);

	number=number-2;
	while(number)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
		number=number-1;
	}

}
