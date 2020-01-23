#ifndef STRUHEADER_H_
#define STRUHEADER_H_

/*******************************************************************************
			Preprocessor Declaration
*******************************************************************************/
#define SUCCESS 0
#define FAIL 1

/*******************************************************************************
			 Global Structure Definitions
*******************************************************************************/
struct student {
	//char name[10];
	int roll;
	struct student *next;
};

/*******************************************************************************
* Functions Prototype Declarations
*******************************************************************************/
struct student *create_node( int );
void addNodeAtLast( int);
void addNodeAtFirst( int );
void addNodeBetween( int , int );
int transerv();
void delNodeAtFirst();
void delNodeAtLast();
void delNodeBetween( int );
void displayList( void ); 

#endif /*STRUHEADER_H_*/

