#include <stdio.h>
#include "striheader.h"

int main( int argc, char *argv[] )
{
	if (argc == 3) {
		int choice, sel;


		printf("\n\t\tWelcome to String Management Tool");
		printf("\n1) To print first string ");
		printf("\n2) To print second string ");
		printf("\n3) To print lenth of first string ");
		printf("\n4) To print lenth of second ");
		printf("\n5) To compare two string ");
		printf("\n6) To convert string into upper case ");
		printf("\n7) To convert string into lower case ");
		printf("\n8) To check whether string have all digit ");
		printf("\n9) To check whether string have all alphabet ");
		printf("\n10) To quit ");

		do {
		printf("\nEnter your choice ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				printf("\nPrinting string first \n%s", argv[1]);
				break;
			case 2:
				printf("\nPrinting string second \n%s", argv[2]);
				break;
			case 3:
				printf("\nLenth of first string is %d", mystrlen(argv[1]));
				break;
			case 4:
				printf("\nLenth of second string is %d", mystrlen(argv[2]));
				break;
			case 5:
				if (mystrcmp(argv[1], argv[2])) {
					printf("\nBoth are same !!");
				} else {
					printf("\nBoth are not same");
				}
				break;
			
			case 6:
				printf("\nEnter which which string you want to convert (1/2) ");
				scanf ("%d", &sel);
				if (sel == 1) {
					myupper(argv[1]);
					printf("\nAfter converting upper case first string %s", argv[1]);
				} else if (sel == 2) {
					myupper(argv[2]);
					printf("\nAfter converting upper case second string %s", argv[2]);
				} else {
					printf("\nEnter valid number");
				}
				break;
					
			case 7:
				printf("\nEnter which which string you want to convert (1/2) ");
				scanf ("%d", &sel);
				if (sel == 1) {
					mylower(argv[1]);
					printf("\nAfter converting lower case first string %s", argv[1]);
				} else if (sel == 2) {
					mylower(argv[2]);
					printf("\nAfter converting lower case second string %s", argv[2]);
				} else {
					printf("\nEnter valid number");
				}
				break;

			case 8:
				printf("\nEnter which which string you want to check (1/2) ");
				scanf ("%d", &sel);
				int temp;
				if (sel == 1) {
					temp = myisdigit(argv[1]);
					if (temp == 1) {
						printf("\nstring have all digit element");
					} else {
						printf("\nstring don't have all digit element");
					}
				} else if (sel == 2) {
					temp = myisdigit(argv[2]);
					if (temp == 1) {
						printf("\nstring have all digit element");
					} else {
						printf("\nstring don't have all digit element");
					}
				} else {
					printf("\nEnter valid number");
				}
				break;
			case 9:
				printf("\nEnter which which string you want to check (1/2) ");
				scanf ("%d", &sel);
				//int temp;
				if (sel == 1) {
					temp = myisalph(argv[1]);
					if (temp == 1) {
						printf("\nstring have all alphabet element");
					} else {
						printf("\nstring don't have all alphabet element");
					}
				} else if (sel == 2) {
					temp = myisalph(argv[2]);
					if (temp == 1) {
						printf("\nstring have all alphabet element");
					} else {
						printf("\nstring don't have all alphabet element");
					}
				} else {
					printf("\nEnter valid number");
				}
				break;
			case 10:
				printf("\nQuit!!");
				break;
			default :
				printf("\nPlease Enter valid choise ");
				break;
		}
		} while (choice != 10 );



	}
	else {
		printf("\nPlease Enter correct input\n");
		printf("For example-> ./file arg1 arg2 \n");
	}
}

