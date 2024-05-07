#include <iostream>
#include "Posts.h"
using namespace std;

int main()
{	
	//note that upvotes/downvotes/viewercount are all total and not based on each post
	Posts Obj1(32, 24, 50, 134, 12, "FearExotix", "WAYNEstate654321");
	Posts Obj2(31, 23, 49, 129, 13, "FearExotix", "DWORTHYstreet123456");
	Posts Obj3;

	
	
	Obj3 = Obj1 + Obj2; //calls the overloaded operator+ member function
	//lhs object is Obj1 and rhs object is Obj2
	
	cout << endl;
	cout << "Is the account created from the first class object equal to account created from the second class object?: " << endl;

	if (Obj1 == Obj2) {
		cout << "Though both blog posts accounts have different stats, their usernames are equal, so we considered them to be equal" << endl;
	}
	else {
		cout << "these two accounts are not the same" << endl;
	}
	cout << endl;
	cout << "below are the account details for class object 3: " << endl;
	cout << Obj3; //this will call the inserition overloaded operator member function, look at the .cpp to see it's purpose


}

