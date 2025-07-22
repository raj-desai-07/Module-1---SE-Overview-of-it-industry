#include<stdio.h>
main(){
	int bill = 0, pizza = 300, burger = 100, dhosa = 150, pullav = 120, panipuri = 50, qty;
	char option = 'n';
	
	do{
		printf("\n\n\t\t\t\t************************** Menu **************************\n");
		printf("\t\t\t\t*\t\t\t\t\t\t\t *\n");
		printf("\t\t\t\t*\t\t   Pizza = $%d\t\t\t\t *\n",pizza);
		printf("\t\t\t\t*\t\t   Burger = $%d\t\t\t *\n",burger);
		printf("\t\t\t\t*\t\t   Dhosa = $%d\t\t\t\t *\n",dhosa);
		printf("\t\t\t\t*\t\t   Pullav = $%d\t\t\t *\n",pullav);
		printf("\t\t\t\t*\t\t   Panipuri = $%d\t\t\t *\n",panipuri);
		printf("\t\t\t\t*\t\t\t\t\t\t\t *\n");
		printf("\t\t\t\t**********************************************************\n\n");
		
		printf("\n\t\t  Press ___ 1. for Pizza, 2. for Burger, 3. for Dhosa, 4. for Pullav, 5. for Panipuri\n\n\n");
		
		int choice;
		printf("Enter Your Choice : ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("\nEnter Quantity of Pizza : ");
				scanf("%d", &qty);
				
				bill = bill + (pizza*qty);
				break;
			case 2:
				printf("\nEnter Quantity of Burger : ");
				scanf("%d", &qty);
				
				bill = bill + (burger*qty);
				break;
			case 3:
				printf("\nEnter Quantity of Dhosa : ");
				scanf("%d", &qty);
				
				bill = bill + (dhosa*qty);
				break;
			case 4:
				printf("\nEnter Quantity of Pullav : ");
				scanf("%d", &qty);
				
				bill = bill + (pullav*qty);
				break;
			case 5:
				printf("\nEnter Quantity of PaniPuri : ");
				scanf("%d", &qty);
				
				bill = bill + (panipuri*qty);
				break;
			default:
				printf("Invalid Choice..!\n");
		}
		
		printf("Do You Want to Continue ? ");
		scanf(" %c", &option);

		
	}while(option == 'y');
	
	printf("\n\nYour Total Bill is : %d", bill);
	
}
