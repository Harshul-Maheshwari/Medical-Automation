#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int bid()
{
	int count = 0;
	char check;

	FILE *fp;
	fp = fopen("bill.txt", "r");

	check = fgetc(fp);
	while (check != EOF)
	{


			check = fgetc(fp);

		if (check == '\n')
		{

			count++;


		}
	}
	fclose(fp);



	return (count - 1);
}

void create_bill()
{
		FILE *fp,*fp2;
	char p,*rid,*str1,*str2,temp[200]="Bill",buf[100];
	int flag=0;
	int bi=bid();
	char d[200];
	fp=fopen("Order1.txt","r");
	itoa(bi,buf,10);
	strcat(temp,buf);






	clrscr();
	p=fgetc(fp);

	while(p!=EOF)
	{
		p=fgetc(fp);

		printf("%c",p);
	}


	fclose(fp);
	printf("\n\n\t\tENTER ID FOR BILL : ");
	fflush(stdin);
	gets(rid);
	fp=fopen("order1.txt","r");


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
	fclose(fp2);



	if(flag==0)
		printf("\n\n\t\tOrder Not Found....");

	printf("\n\n Enter Date:");
	scanf("%s",&d);
	fp2=fopen("Bill.txt","a");
	fprintf(fp2,"\n%s\t%s\t%s\t%s",temp,d,rid,str2);
	fclose(fp2);

	getch();
}

void show_Bill()

{



	FILE *fp;
	char p;
	fp=fopen("bill.txt","r");







	clrscr();
	p=fgetc(fp);

	while(p!=EOF)
	{
		p=fgetc(fp);

		printf("%c",p);
	}

	getch();
}
void pBill()
{


		FILE *fp,*fp2;
	char p,*rid,*str1,*str2,temp1[200]="pBill\\",buf[100],temp[200]="Bill",chs[200];
	int flag=0;
	int bi=bid();
	char d[200];
	itoa(bi,buf,10);
	strcpy(temp,buf);

	clrscr();


	show_Bill();
	printf("\n\n\t\tENTER ORDER ID FOR BILL PRINTING : ");
	fflush(stdin);
	gets(rid);
	fflush(stdin);
	fp=fopen("orderD.txt","r");


	printf("\nEnter File Name To Save This Bill:");
	scanf("%s",d);


	strcat(temp1,d);
	strcat(temp1,".txt");




	fp2=fopen(temp1,"w");
	fprintf(fp2,"\n   Bill Id is:%s",temp);
	fprintf(fp2,"\n\nId\tNAME\tCompany\tCost\tQty\tExpDate");

	printf("\n--------------------------------------------------------------------");
	while((fscanf(fp,"%s",str1))!=EOF)
	{
		if(strcmp(str1,rid)==0)
		{
			fgets(str1,100,fp);
			flag = 1;
			fprintf(fp2,"\n\n%s%s",rid,str1);





		}
	}
	fclose(fp);

	fp=fopen("Order1.txt","r");
		while((fscanf(fp,"%s",str1))!=EOF)
		{
		if(strcmp(str1,rid)==0)
		{
			fgets(str1,100,fp);
			flag = 1;
			fprintf(fp2,"\n\n --Customer Details-- \n \t\Name\tEmail\tTotal Amount\n%s",str1);





		}
	}

	 fprintf(fp2,"\nThanks For Purchasing Get Well SOON");
	fclose(fp2);
}
















int bill_menu()
{
	int ch,*cus;
	while (1)
	{
		clrscr();
		printf("\n\t\t****************************************");
		printf("\n\t\t\t---:ORDER MENU:---");
		printf("\n\t\t\t1.ADD/CREATE BILL");
		printf("\n\t\t\t2.UPDATE BILL");
		printf("\n\t\t\t3.SEARCH ORDER");
		printf("\n\t\t\t4.DELETE BILL");
		printf("\n\t\t\t5.SHOW BILL");
		printf("\n\t\t\t6.PRINTING BILL");
		printf("\n\t\t\t0.EXIT");
		printf("\n\t\t****************************************");

		printf("\n\n\tEnter Your Choice :");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			clrscr();
		       create_bill();
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
			show_Bill();
			getch();
			break;
		case  6:
			clrscr();
			pBill();
			getch();
			break;
		case 0:
			return 0;
		}
	}
}