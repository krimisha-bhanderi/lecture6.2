#include<stdio.h>

void main()
{
	int number,i=1;
	clrscr();

	printf("Enter the number:");
	scanf("%d",&number);
	do{
	if(i%2==0) printf("%d\n",i);
		   i++;
	  }while(i<=number);

}
