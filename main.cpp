#include "stack.h"
#include "queue.h"

/*
Author : Blaz Pocrnja 
Student ID : 5035473
Lab #6
Purpose: Demonstrates the use of the "stack" and "queue" subclasses of "list" by using its member functions to display integers in a stack and queue.
*/

int main(void){
	
	stack s;
	queue q;
	int tmp;

	printf("\nThe numbers 1 through 10 are placed in the stack and queue.\n\n");
	for(int i = 1; i <= 10; i++){
		s.store(i);
		q.store(i);
	}

	printf("\nStack Output:\n");
	for(int i = 1; i <= 10; i++){
		tmp = s.retrieve();
		printf("%4d", tmp);
	}
	
	printf("\nQueue Output:\n");
	for(int i = 1; i <= 10; i++){
		tmp = q.retrieve();
		printf("%4d", tmp);
	}
			
		
	return -1;
}

