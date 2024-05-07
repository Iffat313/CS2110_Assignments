#pragma once
//this is the base class
//this assignment is basically section 8.4 from zybooks and demosntrates how to create inher on ms studio
//the derived class needs to be on the same folder location as the base class in order for this to work
//memorize the syntax 
#ifndef CLOTHINGSTORE_H
#define CLOTHINGSTORE_H
#include<string>
#include<iostream>
using namespace std;

class clothingStore
{
	//1 = small
	//2 = medium
	//3 = large
public:
	void setsize(double s1);
	int getsize() const;

	void setgender(string g2);
	string getgender() const;

	clothingStore();
	clothingStore(double s2, string g2);

	void printWRONG();

protected: //let's do protected as derived and the base class can access this 
	double size;
	string gender;
	string invalid;



};


#endif

