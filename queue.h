#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

using namespace std;
using std::string;


/*
Author : Blaz Pocrnja 
Student ID : 5035473
Lab #6
Purpose: Interface for the class "queue" which is a subclass of "list"
*/

class queue : public list{
	protected:
		int amount;
	public:
		//Constructor
		queue(int n = 100): list(n){
			amount = 0;
		}
		//queue(int n);
		//Accessors
		bool empty();
		bool full();
		//Mutators
		void store(int);
		int retrieve();	
		
};

#endif
