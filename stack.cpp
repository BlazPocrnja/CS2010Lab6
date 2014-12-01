#include "stack.h"


/*
Author : Blaz Pocrnja 
Student ID : 5035473
Lab #6 
Purpose: Member functions to the subclass "stack" which are implementations of the virtual functions in the abstract class "list"
*/

bool stack::empty(){
/*Returns true if stack is empty, false otherwise*/
	return (amount == 0);
}

bool stack::full(){
/*Returns true if stack is full, false otherwise*/
	return (amount == p.size());
}

void stack::store(int n){
/*Pushes an integer*/
	if(!full()){
		p[amount] = n;
		amount++;
	}
	else printf("\nStack is Full!\n");
}

int stack::retrieve(){
/*Pops an integer*/
	int n;
	if(!empty()){
		n = p[amount - 1];
		p.pop_back();
		amount--;
		return n;
	}
	else printf("\nStack is Empty!\n");
}	
