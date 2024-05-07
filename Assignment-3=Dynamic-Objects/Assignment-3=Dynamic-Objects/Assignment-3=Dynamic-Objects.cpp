
// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Posts.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{   
    //the way we create a dynamic object of our class is by using a pointer of a class
    //this pointer will stote the memory address of the dynamically class object type and dereferencing the pointer 
    //will give us access to the contents of the allocated memory, in this case the objects compnents from the class.

    //"a variable that is a pointer to your class": a pointer of a class type

    Posts* ptr = new Posts;
    //remember that "this" object called will also call the default const
    //also recall that the purpose of this main is to see if the functions in Posts.h and Posts.cpp file are working 


    //attributes needed to see if .h and .cpp file works
    int fav;
    int disfav;
    int connections;
    int lookups;
    int totalPosts;
    string accName;
    string accPass;
    string last;

    cout << "below is the default acc details: " << endl;
   // object.Print(); //printing the default account details 
    cout << "enter 1 to create your account, afterwards eneter the details below: ";
    cout << endl;
    int press;
    cin >> press;

    
    cout << endl;
    cout << "how many likes do you want your acc to have?: ";
    cin >> fav;
    ptr->setLikes(fav);

    cout << "how many dislikes do you want your acc to have?: ";
    cin >> disfav;
    ptr->setDislikes(disfav);

    cout << "how many followers do you want?: ";
    cin >> connections;
    ptr->setFollowers(connections);

    cout << "how many views do you want?: ";
    cin >> lookups;
    ptr->setViews(lookups);

    cout << "how many post's do you want?: ";
    cin >> totalPosts;
    ptr->setNumberOfPosts(totalPosts);

    cout << "what's your username? Make sure it's over 12 characters and there's no space: ";
    cin >> accName;
    ptr->setUsername(accName);

    cout << "what's your password? Make sure it's over 12 characters?: ";
    cin >> accPass;
    ptr->setPassword(accPass);

    cout << "what do you want to change your name to? (for the future or now and same rules apply): ";
    cin >> last;
    ptr->setchangeName(&accName, last);



    cout << endl;
    
    ptr->Print();

    cout << endl;

    //Posts* ptr2 = new Posts(12, 39, 45, 54, 2, "taz", "DAV1234566789", "dav");

    delete ptr; //deallocates memory for the dynamically allocates class object type, this will also call the destructor
    //delete ptr2;
    


    //now update the class with these new details with obj.syntax to access the functions
    //object.setLikes(fav);
    //object.setDislikes(disfav);
    //object.setFollowers(connections);
    //object.setViews(lookups);
    //object.setNumberOfPosts(totalPosts);
    //object.setUsername(accName);
    //object.setPassword(accPass);

    //object.Print(); //prints the new details from the user
    
    //and finally let's have the constrcutor with the paramter be called, this will cause the values to be changed
    //remeber to call a constrcutor this is based on the object for the class:
    //Posts object2(12, 39, 45, 54, 2, "taz", "DAV1234566789");
    //object.Print();










}
