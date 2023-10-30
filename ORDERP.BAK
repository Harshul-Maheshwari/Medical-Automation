#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int ord()
{
	int count = 0;
	char check;

	FILE *fp;
	fp = fopen("Order1.txt", "r");

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

int ordd()
{
	int count = 0;
	char check;

	FILE *fp;
	fp = fopen("OrderD.txt", "r");

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







void order_Proces()
{
		FILE *p1;
	char *rid,*str1,*str3,*str2,*res,*final,*cus;
	char orid[]="ORD",oddid[]="ODRD",temp[200],temp1[200];
	char store[15][200];
	char stg[5][200];

	int rate=0;
	int flag=0;
	int id,x=0,i,xs=0,qtys=0;
	int oid,odid;
	char ch=0;

	clrscr();


	show_C();







	oid=ord();

	oid++;
	odid=ordd();
	printf("\n\n\t\tENTER ID FOR SELECT : ");
	fflush(stdin);
	gets(rid);
	p1=fopen("Customer.csv","r");
	printf("\n-----------------------------------------------------");
	while((fscanf(p1,"%s",str1))!=EOF)
	{

		if(strcmp(str1,rid)==0)
		{
			fgets(str1,100,p1);
			flag = 1;

			strcpy(str3,str1);
			break;
		}
	}
	fclose(p1);



















	      cus=strtok(str3,"\t");
	      while(cus !=NULL)
	      {
		strcpy(stg[xs],cus);

		cus=strtok(NULL,"\t");
		xs++;
	      }


	      getch();
	     // printf("%d",xs);




		itoa(oid,temp,10);
	strcat(orid,temp);


	clrscr();

	st:
	clrscr();
	show_medi();






	printf("\n\t\tENTER ID FOR SEARCH : ");
	fflush(stdin);
	gets(rid);
	p1=fopen("Medicine.csv","r");
	printf("\n\nId\tNAME\tCompany\tType\tCost\tQty\tNOC\tMfgDate\tExpDate");
	printf("\n--------------------------------------------------------------------");
	while((fscanf(p1,"%s",str1))!=EOF)
	{
		if(strcmp(str1,rid)==0)
		{
			fgets(str1,100,p1);
			flag = 1;
			printf("\n\n%s%s",rid,str1);
			strcpy(str2,str1);
			break;
		}
	}
	fclose(p1);
	if(flag==0)
		printf("\n\n\t\tMedicine Not Found....");
	else
	{
		clrscr();
		printf("Medicine is:\n");
	      //	printf("%s",str2);


		xs=0;

	      res=strtok(str2,"\t");
	      while(res !=NULL)
	      {
		strcpy(store[xs],res);
		res=strtok(NULL,"\t");
		xs++;
	      }




		       /*	if(rx==0)
			{
			       //	printf("%s",res);
				printf("%s at %d",res,xs);
				xs++;
			}*/















	     }


	   //  printf("%s",res);







	     /*
 */


		clrscr();
	printf("\n\n");
	printf("\n\t\t\t\t---ORDER---");
	printf("\n\n\n \tMedicine Name : %s \tCompany Name : %s", store[0], store[1], store[2]);
	printf("\n\n\tMedicine Cost : %s \t\tMedicine Qty : %s", store[3], store[4]);
	printf("\n\nMedicine Type : %s \t\tExp Date : %s ", store[2], store[7]);


	printf("\n Enter Qty:");
	scanf("%d",&qtys);

	rate=atoi(store[3]);

	printf("Amount is:%d",((qtys)*rate));
	printf("\n\n\n\t\tPress Any Key.....!!!!!");



	itoa(odid,temp1,10);
	strcat(oddid,temp1);



		p1=fopen("OrderD.txt","a");
		fprintf(p1,"\n%s\t%s\t%s\t%s\t%d\t%d\t%s",oddid,orid,store[0],store[1],rate,qtys,store[7]);
		fclose(p1);



		printf("\nAdd More Medicine Press y:\n");

		fflush(stdin);
		scanf("%c",&ch);
		if(ch=='y')
		{        odid++;
			strcpy(oddid,"ODRD");

			goto st;
		}
		else
		{


			p1=fopen("Order1.txt","a");


		fprintf(p1,"\n%s\t%s\t%s\t%d",orid,stg[0],stg[2],(qtys*rate));
		fclose(p1);
		}















	getch();







   /*	strcpy(order_Data[x],str2);
		x++;



		clrscr();
		for(i=0;i<x;i++)
		{
			printf("%s",order_Data[i]);
		}

     */

	}

