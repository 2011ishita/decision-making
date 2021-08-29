#include<stdio.h>
main()
{
	//1. Display the menu
	printf("Pick an item : \n1. Pizza\n2. Burger\n3. Pasta\n4. French Fries\n5. Sandwich");
	//2. Read their choice
	int choice=0;
	scanf("%d",&choice);
	//3. Display base3d on their choice
	
	switch(choice)
	{
		case 1:
			printf("You picked Pizza.");
			break;
		case 2:
				printf("You picked Burger.");
			break;
		case 3:
				printf("You picked Pasta.");
			break;
		case 4:
				printf("You picked French Fries.");
			break;
		case 5:
				printf("You picked Sandwich.");
			break;
		default :
				printf("Invalid choice");
}
}
