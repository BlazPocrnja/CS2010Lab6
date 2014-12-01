#include "queue.h"

/*
Author : Blaz Pocrnja 
Student ID : 5035473
Lab #6 
Purpose: Member functions to the subclass "queue" which are implementations of the virtual functions in the abstract class "list"
*/


bool queue::empty(){
/*Returns true if queue is empty, false otherwise*/
	return (amount == 0);
}

bool queue::full(){
/*Returns true if queue is full, false otherwise*/
	return (amount == p.size());
}

void queue::store(int n){
/*Stores an integer at the back of the queue*/
	if(!full()){
		p[amount] = n;
		amount++;
	}
	else printf("\nQueue is Full!\n");
}

int queue::retrieve(){
/*Returns an integer from the front of the queue*/
	if(!empty()){
		int n = p.front();
		for(int i = 0; i < amount - 1; i++){
			p[i] = p[i+1];
		}
		amount--;
		return n;
	}
	else printf("\nStack is Empty!\n");
}
