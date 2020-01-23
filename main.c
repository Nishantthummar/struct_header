#include <stdio.h>
#include <stdlib.h>
#include "struheader.h"

int main (int argc, char *argv[]) {
	int add = 0; //!< strore addition of roll number

	addNodeAtFirst(10);
	displayList();
	addNodeAtLast(45);
	displayList();
	addNodeAtFirst(25);
	displayList();
	addNodeBetween(10,20);
	displayList();
	delNodeAtFirst();
	displayList();
	delNodeAtLast();
	displayList();
	delNodeBetween(20);
	displayList();
	printf("\nSum of all roll no is %d", transerv());
	return 0;
}
