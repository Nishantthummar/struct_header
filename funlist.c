#include <stdio.h>
#include <stdlib.h>
#include "struheader.h"

/*******************************************************************************
* structure definition & Finctions definition
*******************************************************************************/
// create start pointer which point to NULL
struct student *start=NULL;

/******************************************************************//**
*Function to create first node
*@param[in] r here r is the roll number of that node
**********************************************************************/
struct student	*create_node(int r) {
	struct student *pointer;
	pointer = (struct student*)malloc(sizeof(struct student));
	if( NULL == pointer )
	{
		printf("Error! Unable to allocate memory\n");
		exit(1);
	}
	pointer->roll = r;
	pointer->next = NULL;
	return pointer;
}

/******************************************************************//**
*Function to add node at last if list is present
**********************************************************************/
void addNodeAtLast( int r ) {
	struct student *temp=NULL;

	if( NULL == start )
	{
		printf("The list is empty\n");
		return;
	}

	temp = start;

	while( temp->next != NULL )
	{
		temp = temp->next;
	}
	
	temp->next = create_node(r);
	 temp->next->next = NULL; //remove if not work me change on 22/01/20
	 
}

/******************************************************************//**
*Function to add node at first 
**********************************************************************/
void addNodeAtFirst( int r ) {

	struct student *temp=NULL;

	if( start == NULL )
	{
		printf("The list is empty\n");
		start = create_node(r);
		return;
	} 
	
	temp = start;
	start = create_node(r);
	start->next = temp; //may be temp->next
	
}

/******************************************************************//**
*Function to add node at after the passing roll number structur
*@param[in] r which is roll number after that roll number containing node add one more node 
**********************************************************************/
void addNodeBetween( int r, int r_add ) {
	struct student *temp = NULL;
	struct student *temp1 = NULL;
	temp = start;
	while ( temp != NULL ) {
		if (temp->roll == r) {
			
			temp1 = temp->next;
			temp->next = create_node(r_add);
			temp = temp->next;
			temp->next = temp1;
			return;
		}
		temp = temp->next;
	}
		printf("\nNo value found\n");
}

/******************************************************************//**
*Function to sum all the roll number from all the node
**********************************************************************/
int transerv() {
	struct student *temp = start;
	int sum = 0;
	while (temp != NULL ) {
		sum = sum+temp->roll;
		temp = temp->next;
	}
	return sum;
}

/******************************************************************//**
*Function to delete node at first 
**********************************************************************/
void delNodeAtFirst() {
	struct student *temp = NULL;
	temp = start;
	if (start == NULL ) {
		printf("NO First node found");
		return;
	}
	temp = start;
	start = temp->next;
	free(temp);
	temp = NULL;
	printf("The very first node is deleted from the list\n");
}

/******************************************************************//**
*Function to delete node at last 
**********************************************************************/
void delNodeAtLast() {
	 struct student *temp=NULL, *temp1=NULL;

	// This condition occurs when you do not have any node in the list
        if( start == NULL )
        {
                printf("The list is empty @delNodeAtLast\n");
                return;
        }

	// This condition occurs when you have only single node in the list
        if( start->next == NULL)
        {
                free(start);
                start = NULL;
                printf("The node is deleted\n");
                return;
        }

	temp = start;
        temp1 = start;

        // Traverse to the last node of the list
        while(temp->next != NULL) {
            temp1 = temp;
            temp = temp->next;
        }

        // Disconnects the link of second last node with last node 
        temp1->next = NULL;

        // Delete the last node
        free(temp);
	printf("The last node is deleted\n");
}


/******************************************************************//**
*Function to delete node at between
**********************************************************************/
void delNodeBetween( int r ) {
	struct student *temp = NULL;
	struct student *temp1 = NULL, *temp2 = NULL;
	if( start == NULL ) {
		printf("\nList is empty @delNodeBetween");
		return;
	}

	temp = start;

	while ( temp != NULL ) {
		if (temp->roll == r ) {
			temp1 = temp->next;
			free(temp);
			start = temp1;
			return;
		}else if (temp->next->roll == r) {
			temp2 = temp;
			temp = temp->next;
			temp1 = temp->next;
			//temp1 = temp1->next;
			free(temp);
			temp2->next = temp1;
			if (temp1 == NULL ) {
				temp = NULL;
				return;
			}
			temp = temp1;
			return;
		}

		temp = temp->next;
		//printf("\nnot return");
	}
	printf("\nNo value found");

}

/******************************************************************//**
*Function to display all node value (roll)
**********************************************************************/
void displayList( void )
{
	struct student *temp=NULL;
	if( start == NULL )
	{
		printf("The is empty @displayList()\n");
		return;
	}

	temp = start;

	printf("\n\nThe list is\n[ ");
	do
	{
		printf("%d ", temp->roll);
		temp = temp->next;
	}while(temp != NULL);
	printf("]\n\n");
}

