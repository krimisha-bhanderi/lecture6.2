#include<stdio.h>

main(){
    int choice,pp,pizza,puff;


    do{
    printf("Press 1 for panipuri...\n");
    printf("Press 2 for pizza..\n");
    printf("Press 3 for puff..\n");
    printf("Enter your choice..\n");
    scanf("%d",&choice);

    switch(choice){
    case 1: printf("Mixed flavoured panipuri..\n");
	    printf("ragda panipuri..\n");
	    printf("simple-Masala panipuri..\n");
	    printf("Enter your choice..\n");
	    scanf("%d",&pp);
	    
	    switch(pp){
	    case 1: printf("1-Mixed flavoured panipuri is getting ready..\n");
		break;
		case 2: printf("2-ragda panipuri is getting ready..\n");
		break;
		case 3: printf("3-simple-Masala panipuri is getting ready..\n");
		break;	    
		}
		break;
    case 2: printf("chesse pizza..\n");
	    printf("Margeretta pizza..\n");
	    printf("paneer chilli pizza..\n");
	    printf("Enter your choice..\n");
	    scanf("%d",&pizza);
	    
	    switch(pizza){
	    case 1: printf("1-chesse pizza is getting ready..\n");
		break;
		case 2: printf("2-Margeretta pizza is getting ready..\n");
		break;
		case 3: printf("3-paneer chilli pizza is getting ready..\n");
		break;	    
		}
		break;
    case 3: printf("simple puff..\n");
	    printf("chinese puff..\n");
	    printf("paneer puff..\n");
	    printf("Enter your choice..\n");
	    scanf("%d",&puff);
	    
	     switch(puff){
	    case 1: printf("1-simple puff is getting ready..\n");
		break;
		case 2: printf("2-chinese puff is getting ready..\n");
		break;
		case 3: printf("3-paneer puff is getting ready..\n");
		break;	    
		}
		break;
    case 0:printf("Visit Again");
	   break;
    default:printf("invalid choice..\n");
    }

    }while(choice!=0);
}
