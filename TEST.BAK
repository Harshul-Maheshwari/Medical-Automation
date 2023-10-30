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

void main()
{
	FILE *fp;
	char name[20]="bill";

	int i=5;
	clrscr();

	for(i=0;i<10;i++)
	{


		strcat(name,"i");
		strcat(name,".txt");

	fp=fopen(name,"w");
	fprintf(fp,"hello");
	fclose(fp);
	}

	printf("%s",itoa(i));














	getch();
}

