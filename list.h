#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <cmath>

using namespace std;
using std::string;


/*
Author : Blaz Pocrnja 
Student ID : 5035473
Lab #6
Purpose: Interface for the class "list" which is a abstract class with only virtual methods
*/

class list {

protected:      

     vector <int> p;   

public :
     list( int n = 100) 
     { 
     	p.resize(n);   
     }
     virtual bool empty() = 0;
     virtual bool full() = 0;
     virtual void store(int val) = 0;
     virtual  int retrieve() = 0;

};



#endif
