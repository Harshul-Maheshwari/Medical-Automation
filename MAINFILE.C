#include<stdio.h>
#include<conio.h>
#include "Supplier.c"
#include "Customer.c"
#include "Medicine.c"
#include "Order.c"
#include "Bill.c"
#include "Pages.c"
void main()
{
	int ch;
	printMsg();
	while(1)
	{
		m:
		textbackground(CYAN);
		textcolor(BLACK);
		clrscr();
		printf("\n\t\t***************************************");
		printf("\n\t\t\t---:SELECT OPTION:---");
		printf("\n\t\t\t1. SUPPLIER SECTION");
		printf("\n\t\t\t2. MEDICINE SECTION");
		printf("\n\t\t\t3. CUSTOMER SECTION");
		printf("\n\t\t\t4. ORDER PROCESSING");
		printf("\n\t\t\t5. BILL");
		printf("\n\t\t\t6. ABOUT");
		printf("\n\t\t\t0. EXIT");
		printf("\n\t\t***************************************");

		printf("\n\n\tEnter Your Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				clrscr();
				supplier_menu();
				goto m;
			case 2:
				clrscr();
				medicine_menu();
				goto m;
			case 3:
				clrscr();
				customer_menu();
				goto m;
			case 4:
				clrscr();
				order_menu();
				goto m;
			case 5:
				clrscr();
				bill_menu();
				goto m;
			case 6:
				clrscr();
				printf("\n\t\t\t=============================");
				printf("\n\n\t\t\t\tABOUT US....\n");
				printf("\n\t\t\t=============================");
				goto m;
			case 0:
				clrscr();
				Thankyou();
				getch();
				exit(0);
			default:
				printf("\n\n\tInvalid Choice...!!!");
				goto m;
		}
	}
}