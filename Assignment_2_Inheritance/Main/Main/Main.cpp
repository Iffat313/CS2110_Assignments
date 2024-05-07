// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clothingStore.h"
#include"pant.h"
using namespace std;

int main()
{	
	//this is a object for the derived class
	//notice in the .cpp file for the derived class it will call the base constructor
	pant obj2;
	obj2.print2();
	cout << endl;

	//inputs that are going to be read from the user

	double userSIZE;
	string userGENDER;
	string userTYPE;
	string userCOLOR;
	string userSTYLE;
	int userCOST;

	cout << "Enter size, sizes come in the numerical range of 1-3 (you can use a decimal): ";
	cin >> userSIZE;
	
	cout << "Enter gender: ";
	cin >> userGENDER;

	cout << "Enter type of pants: ";
	cin >> userTYPE;

	cout << "Enter type of color: ";
	cin >> userCOLOR;

	cout << "Enter type of style: ";
	cin >> userSTYLE;

	cout << "Enter the cost, if cost is higher than 50 we will price it to 50!: ";
	cin >> userCOST;
	
	//printing the details from what the user wants
	obj2.setsize(userSIZE);
	obj2.setgender(userGENDER);
	obj2.settype(userTYPE);
	obj2.setcolor(userCOLOR);
	obj2.setstyle(userSTYLE);
	obj2.setusercost(userCOST);

	cout << endl;

	obj2.print();
	cout << endl;

	//now we will use a non default constructor from the base class and the derived class 

	pant obj3("sweatpants", "gray", "stripes", 15);
	obj3.getfrombase(1.5, "male");
	

	obj3.print2();


}


