#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct customer
{
	int id;
	char name[50];
	char city[20];
	char email[40];
	unsigned long mob;
}c;
void write_in_file(c *inp)
{
	FILE *fp;
	fp = fopen("Customer.csv","a");
	fprintf(fp,"%d\t%s\t%s\t%s\t%ld\n",inp->id,inp->name,inp->city,inp->email,inp->mob);
	fclose(fp);
}
int count_C()
{
	int count = 0;
	char check;

	FILE *fp;
	fp = fopen("Customer.csv", "r");
	clrscr();
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
void input_customer(c *inp)
{
	char ch;
	inp->id = count_C();
	inp->id++;
	fflush(stdin);
	printf("\n\t\t\t=============================");
	printf("\n\n\t\t\t\tINPUT RECORD....\n");
	printf("\n\t\t\t=============================");
	printf("\n\tCustomer's Id : %d ",inp->id);
	printf("\n\tEnter Customer Name : ");
	fflush(stdin);
	scanf("%s",&inp->name);
	printf("\n\tEnter City : ");
	scanf("%s",&inp->city);
	printf("\n\tEnter Email : ");
	scanf("%s",&inp->email);
	printf("\n\tEnter Mobile Number : ");
	fflush(stdin);
	scanf("%ld",&inp->mob);

	printf("\n\tDo you Want To Save Data(y/n) : ");
	fflush(stdin);
	scanf("%c",&ch);

	if(ch == 121 || ch == 89)
	{
		write_in_file(inp);
	}
}
void search_C()
{
	FILE *p1;
	char *rid,*str1;
	int flag=0;
	char ch;
	clrscr();
	printf("\n\t\t\t=============================");
	printf("\n\n\t\t\t\tSEARCH RECORD....\n");
	printf("\n\t\t\t=============================");

	printf("\n\n\t\tENTER ID FOR SEARCH : ");
	fflush(stdin);
	gets(rid);
	p1=fopen("Customer.csv","r");
	printf("\n\n\tId\tNAME\tCity\tEmail\tMobile");
	printf("\n-----------------------------------------------------");
	while((fscanf(p1,"%s",str1))!=EOF)
	{
		if(strcmp(str1,rid)==0)
		{
			fgets(str1,100,p1);
			flag = 1;
			printf("\n\n\t%s%s",rid,str1);
			break;
		}
	}
	fclose(p1);
	if(flag==0)
		printf("\n\n\n\t\tCustomer Not Found....");
	printf("\n\n\n\t\tPress Any Key...!!!");
}

void show_C()
{
	FILE *fp;
	char data;
	printf("\n\t\t\t=============================");
	printf("\n\n\t\t\t\tSHOW RECORDS....\n");
	printf("\n\t\t\t=============================\n\n");
	fp = fopen("Customer.csv","r");
	while(!feof(fp))
	{
		data=fgetc(fp);
		if(data == ',')
		{
			printf("\t");
		}
		else
		{
			printf("%c",data);
		}
	}

	fclose(fp);
}

void update_C(c *c1)

{
	FILE *p1;
	char *rid,*str1,temp[200],aid[200];
	char *data,name[200],city[200],mob[200],em[200];
	int i=0,flag=0,id=0;
	strcpy(name,"\n");
	strcpy(data,"n\tId\tNAME\tCity\tEmail\tMobile\n");




	clrscr();
	show_C();


	printf("\n\n\t\tENTER ID FOR SEARCH : ");
	fflush(stdin);
	gets(rid);
	p1=fopen("Customer.csv","r");
	printf("\n\n\tId\tNAME\tCity\tEmail\tMobile\n");
	printf("\n-----------------------------------------------------");
	strcpy(data,"\n");
	while((fscanf(p1,"%s",str1))!=EOF)

	{


		id++;


		if(strcmp(str1,rid)==0)
		{
			strcpy(str1,"");
			strcat(str1,"\t");

				fgets(str1,100,p1);
				printf("\nEnter CustomerName:");
				gets(temp);

				strcpy(name,temp);
				strcat(name,"\t");

				printf("\nEnter CustomerCity:");
				gets(temp);

				strcpy(city,temp);
				strcat(city,"\t");

				printf("\nEnter CustomerEmail:");
				gets(temp);
				strcpy(em,temp);
				strcat(em,"\t");

				printf("\nEnter CustomerMobile:");
				gets(temp);
				strcpy(mob,temp);
				strcat(mob,"\t");








			  strcpy(str1,rid);
			  strcat(str1,name);
			  strcat(str1,city);
			  strcat(str1,em);
			  strcat(str1,mob);
			  strcat(str1,"\n");


			    flag=1;

		       //	printf("\n\n\t%s%s",rid,str1);

		}






			strcat(data,str1);
			strcat(data,"\t");


			i++;
			if(i%5==0)
			{
				printf("\n");
				strcat(data,"\n");
			}
				if(flag==1)
		{
			strcat(data,"\n");
		}













	}


	fclose(p1);


	if(flag==0)
		printf("\n\n\n\t\tCustomer Not Found....");
	else
		printf("\n\n\n Update SucessFul");
	printf("\n\n\n\t\tPress Any Key...!!!");



	p1=fopen("Customer.csv","w");
	fprintf(p1,"%s",data);
	fclose(p1);
	strcpy(data,"");
	getch();
}







void dele_C()
{

	FILE *p1;
	char *rid,*str1;
	char store[300],*data;
	int flag=0;
	char ch;
	int i=0;
	clrscr();
	show_C();
	strcpy(data,"n\tId\tNAME\tCity\tEmail\tMobile\n");

	printf("\n\n\t\tENTER ID FOR SEARCH : ");
	fflush(stdin);
	gets(rid);
	p1=fopen("Customer.csv","r");
	printf("\n\n\tId\tNAME\tCity\tEmail\tMobile\n");
	printf("\n-----------------------------------------------------");
	strcpy(data,"\n");
	while((fscanf(p1,"%s",str1))!=EOF)

	{



		if(strcmp(str1,rid)==0)
		{

				fgets(str1,100,p1);
			flag = 1;
		       //	printf("\n\n\t%s%s",rid,str1);

		}
		else
		{



			strcat(data,str1);
			strcat(data,"\t");


			i++;
			if(i%5==0)
			{
				printf("\n");
				strcat(data,"\n");
			}



		}









	}


	fclose(p1);
	printf("\nDelete Sucessful!!!!");

	if(flag==0)
		printf("\n\n\n\t\tCustomer Not Found....");
	printf("\n\n\n\t\tPress Any Key...!!!");



	p1=fopen("Customer.csv","w");
	fprintf(p1,"%s",data);
	fclose(p1);
	strcpy(data,"");
	getch();
}







int customer_menu()
{
    int ch;
    c *ptr;
    while(1)
    {
	clrscr();
	printf("\n\t\t****************************************");
	printf("\n\t\t\t---:CUSTOMER MENU:---");
	printf("\n\t\t\t1.ADD CUSTOMER");
	printf("\n\t\t\t2.SEARCH CUSTOMER");
	printf("\n\t\t\t3.UPDATE CUSTOMER");
	printf("\n\t\t\t4.DELETE CUSTOMER");
	printf("\n\t\t\t5.VIEW/LIST OF EXISTING CUSTOMER");
	printf("\n\t\t\t0.EXIT");
	printf("\n\t\t****************************************");

	printf("\n\n\tEnter Your Choice :");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			clrscr();
			input_customer(ptr);
			getch();
			break;
		case 2:
			clrscr();
			search_C();
			getch();
			break;
		case 3:
			clrscr();
			update_C(ptr);
			getch();
			break;
		case 4:
			clrscr();
			dele_C();
			getch();
			break;
		case 5:
			clrscr();
			show_C(ptr);
			getch();
			break;
		case 0:
			return 0;
	}
    }
}