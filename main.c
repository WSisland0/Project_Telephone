#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int sel;
	int fg = 0;

	do{

		printf("\t\t\t*********Phone Number Management*************\n");
		printf("\t\t\t\t\t1. add new friend\n");
		printf("\t\t\t\t\t2. del new friend\n");
		printf("\t\t\t\t\t3. search friend\n");
		printf("\t\t\t\t\t4. display all  friend\n");
		printf("\t\t\t\t\t0. quit\n");
		printf("\t\t\t********************************************\n");
		printf("\t\t\tinput your choice#");
		scanf("%d",&sel);
		if((sel<0) || (sel>4))
		{
			system("clear");
			printf("\t\t\tinvalid choice!Try again\n");
			continue;
		}

		system("clear");
		switch(sel)
		{
			case 1:
				printf("add TBD\n");
				getchar();
				getchar();
				break;
			case 2:
				printf("del TBD\n");
				getchar();
				getchar();
				break;
			case 3:
				printf("search TBD\n");
				getchar();
				getchar();
				break;
			case 4:
				printf("display TBD\n");
				getchar();
				getchar();
				break;
			case 0:
				printf("\t\t\tBye\n");
				getchar();
				getchar();
				fg = 1;
			default:
				break;
		}
		if(fg == 1)
		{
			return 1;
		}

	}while(1);
	return 0;
}
