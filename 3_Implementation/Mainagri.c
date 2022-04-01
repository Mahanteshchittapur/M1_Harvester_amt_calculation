#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Mainagri.h"
void main()
{
	details();
	int option;
	do
	{
		printf("****Harvester amount****\n");
		printf("Please enter your choice from below (1-4):\n");
		printf("1. red gram\n");
		printf("2. chik pea\n");
		printf("3. carom\n");
		printf("4. sorghum\n");
		printf("5. EXIT\n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			red_gram();
			break;
		case 2:
			chik_pea();
			break;
        case 3:
			carom();
			break;

        case 4:
			sorghum();
			break;
        case 5:
			exit(0);
			break;
		default:
			printf("SORRY INVALID CHOICE!\n");
			printf("PLEASE CHOOSE FROM 1,2,3,4 or 5\n");
		}


	} while (option != 6);


}

void details()
{

	printf("Enter your  name:\n");
	scanf("%s", B.name);
	printf("Enter your survey Number:\n");
	scanf("%d", &B.surveynum);

}
