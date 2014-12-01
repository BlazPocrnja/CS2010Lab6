#ifndef STACK_H
#define STACK_H

#include "list.h"

using namespace std;
using std::string;


/*
Author : Blaz Pocrnja 
Student ID : 5035473
Lab #6
Purpose: Interface for the class "stack" which is a subclass of "list"
*/

class stack : public list{
	protected:
		int amount;
	public:
		//Constructor
		stack(int n = 100): list(n){
			amount = 0;
		}
		//stack(int n);
		//Accessors
		bool empty();
		bool full();
		//Mutators
		void store(int);
		int retrieve();		
};

#endif
