#include "pant.h"

pant::pant() {
	clothingStore(); //this derived class default constructor calls the default constructor from the base class, of course the attributes from the class are now intialized
	type = "Jeans";
	color = "black";
	style = "ripped";
	usercost = 20; 

}

pant::pant(string t, string c, string s, int u) {
	//clothingStore(1.5, "male");
	type = t;
	color = c;
	style = s;
	usercost = u;

}

void pant::getfrombase(double s3, string g3) {
	double store = s3;
	string store_1 = g3;
	clothingStore(store, store_1);
}

void pant::settype(string t) {
	type = t;
}
string pant::gettype() const {
	return type;
}

void pant::setcolor(string c) {
	color = c;
}
string pant::getcolor() const {
	return color;
}

void pant::setstyle(string s) {
	style = s;
}
string pant::getstyle() const {
	return style;
}

void pant::setusercost(int u) {
	if (u < 50) {
		usercost = u;

	}

	else {
		usercost = 50;
	}
}
int pant::getusercost() const {
	return usercost;
}

void pant::print() {
	cout << "Here's the details on the pants you ordered: " << endl;
	if (size == 0 or size < 0) {
		printWRONG();
	}
	else {
		cout << "Here's the size: " << getsize() << endl;
	}
	cout << "Here's the gender: " << getgender() << endl;
	cout << "Here's the type: " << gettype() << endl;
	cout << "Here's the color : " << getcolor() << endl;
	cout << "Here's the style: " << getstyle() << endl;
	cout << "Here's the cost: " << getusercost() << endl;
}

void pant::print2() {
	cout << "Here's the details on the default pants you ordered: " << endl;
	if (size == 0 or size < 0) {
		printWRONG();
	}
	else {
		cout << "Here's the size: " << size << endl;
	}

	cout << "Here's the gender: " << gender << endl;
	cout << "Here's the type: " << type << endl;
	cout << "Here's the color : " << color << endl;
	cout << "Here's the style: " << style << endl;
	cout << "Here's the cost: " << usercost << endl;
}

