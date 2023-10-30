#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include"OrderP.c"
void show_Ord()
{
	FILE *fp;
	char p,*rid,*str1,*str2;
	int flag=0;
	fp=fopen("Order1.txt","r");



	clrscr();
	p=fgetc(fp);

	while(p!=EOF)
	{
		p=fgetc(fp);

		printf("%c",p);
	}


	fclose(fp);
	printf("\n\n\t\tENTER ID FOR VIEW : ");
	fflush(stdin);
	gets(rid);
	fp=fopen("orderD.txt","r");
	printf("\n\nId\tNAME\tCompany\tCost\tQty\tExpDate");
	printf("\n--------------------------------------------------------------------");
	while((fscanf(fp,"%s",str1))!=EOF)
	{
		if(strcmp(str1,rid)==0)
		{
			fgets(str1,100,fp);
			flag = 1;
			printf("\n\n%s%s",rid,str1);
			strcpy(str2,str1);

		}
	}
	fclose(fp);
	if(flag==0)
		printf("\n\n\t\tOrder Not Found....");

	getch();
}









int order_menu()
{
	int ch,*cus;
	while (1)
	{
		clrscr();
		printf("\n\t\t****************************************");
		printf("\n\t\t\t---:ORDER MENU:---");
		printf("\n\t\t\t1.ADD/CREATE ORDER");
		printf("\n\t\t\t2.UPDATE ORDER");
		printf("\n\t\t\t3.SEARCH ORDER");
		printf("\n\t\t\t4.DELETE ORDER");
		printf("\n\t\t\t5.SHOW ORDER");
		printf("\n\t\t\t0.EXIT");
		printf("\n\t\t****************************************");

		printf("\n\n\tEnter Your Choice :");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			clrscr();
		       //	 customer_Process();
		       //	med_Process();

		       order_Proces();
			getch();
			break;
		case 2:
			clrscr();
			getch();
			break;
		case 3:
			clrscr();
			getch();
			break;
		case 4:
			clrscr();
			getch();
			break;
		case 5:
			clrscr();
			show_Ord();
			getch();
			break;
		case 0:
			return 0;
		}
	}
}
