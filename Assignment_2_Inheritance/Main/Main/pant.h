#pragma once
#ifndef PANT_H
#define PANT_H
#include<iostream>
#include<string>
#include"clothingStore.h"

class pant:public clothingStore
{

	public:
		//there will be a mutator and accessor for each attribute 
		pant();
		pant(string t, string c, string s, int u);

		void settype(string t);
		string gettype() const;

		void setcolor(string c);
		string getcolor() const;

		void setstyle(string s);
		string getstyle() const;

		void setusercost(int u);
		int getusercost() const;

		void getfrombase(double s3, string g3);

		void print(); //this one is dedeicated for functions 
		void print2(); //this one is dedicated for constructors 

		



	private:
		string type;
		string color;
		string style;
		int usercost;

};

#endif

