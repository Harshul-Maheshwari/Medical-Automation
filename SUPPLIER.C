#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct supplier
{
	int id;
	char name[50];
	char brand[30];
	char status[10];
	char email[40];
	unsigned long mob;
}s;
void write_to_file(s *inp)
{
	FILE *fp;
	fp = fopen("Supplier.csv","a");
	fprintf(fp,"%d\t%s\t%s\t%s\t%s\t%ld\n",inp->id,inp->name,inp->brand,inp->status,inp->email,inp->mob);
	fclose(fp);
}
int count_S()
{
	int count = 0;
	char check;

	FILE *fp;
	fp = fopen("Supplier.csv", "r");
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
	return count;
}

void input(s *inp)
{
	char ch;
	inp->id = count_S();
	printf("\n\t\t\t=============================");
	printf("\n\n\t\t\t\tINPUT RECORD....\n");
	printf("\n\t\t\t=============================");
	fflush(stdin);
	printf("\n\tSupplier's Id : %d ",inp->id);
	inp->id++;
	printf("\n\tEnter Supplier Name : ");
	fflush(stdin);
	gets(inp->name);
	printf("\n\tEnter Brand : ");
	gets(inp->brand);
	printf("\n\tEnter Status : ");
	gets(inp->status);
	printf("\n\tEnter Email : ");
	gets(inp->email);
	printf("\n\tEnter Mobile Number : ");
	fflush(stdin);
	scanf("%ld",&inp->mob);

	printf("\n\n\tDo you Want To Save Data(y/n) : ");
	fflush(stdin);
	scanf("%c",&ch);

	if(ch == 121 || ch == 89)
	{
		write_to_file(inp);
	}
}
void show(s *inp)
{
	FILE *fp;
	char data;
	printf("\n\t\t\t=============================");
	printf("\n\n\t\t\t\tSHOW RECORD....\n");
	printf("\n\t\t\t=============================\n");
	fp = fopen("Supplier.csv","r");
	while(!feof(fp))
	{
		data=fgetc(fp);
		printf("%c",data);
	}

	fclose(fp);
}
void search()
{
	FILE *p1;
	char *rid,*str1;
	int flag=0;
	clrscr();
	printf("\n\t\t\t=============================");
	printf("\n\n\t\t\t\tSEARCH RECORD....\n");
	printf("\n\t\t\t=============================");

	printf("\n\t\tENTER ID FOR SEARCH : ");
	fflush(stdin);
	gets(rid);
	p1=fopen("Supplier.csv","r");
	printf("\n\n\tId\tNAME\tBRAND\tSTATUS\tEmail\tMobile");
	printf("\n--------------------------------------------");
	while((fscanf(p1,"%s",str1))!=EOF)
	{
		if(strcmp(str1,rid)==0)
		{
			fgets(str1,100,p1);
			flag = 1;
			printf("\n\n\tRecord is :\n\t%s\t%s",rid,str1);
			break;
		}
	}
	fclose(p1);
	if(flag==0)
		printf("\n\n\tSupplier Not Found....");
	printf("\n\n\n\t\tPress Any Key...!!!");
}

int supplier_menu()
{
    int ch;
    s *ptr;
    while(1)
    {
	clrscr();
	printf("\n\t\t*********************************************");
	printf("\n\t\t\t---:SUPPLIER MENU:---");
	printf("\n\t\t\t1.ADD SUPPLIER");
	printf("\n\t\t\t2.SEARCH SUPPLIER");
	printf("\n\t\t\t3.UPDATE SUPPLIER");
	printf("\n\t\t\t4.DELETE SUPPLIER");
	printf("\n\t\t\t5.VIEW/LIST OF EXISTING SUPPLIER");
	printf("\n\t\t\t0.EXIT");
	printf("\n\t\t*********************************************");

	printf("\n\n\tEnter Your Choice :");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			clrscr();
			input(ptr);
			getch();
			break;
		case 2:
			clrscr();
			search();
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
			show(ptr);
			getch();
			break;
		case 0:
			return 0;
	}
    }
}