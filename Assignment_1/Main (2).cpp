// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Posts.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    Posts object; //object for the class
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

    cout << "below is the default acc details: " << endl;
    object.Print(); //printing the default account details 
    cout << "enter 1 to create your account, afterwards eneter the details below: ";
    cout << endl;
    int press;
    cin >> press;

    cout << endl;
    cout << "how many likes do you want your acc to have?: ";
    cin >> fav;
    cout << "how many dislikes do you want your acc to have?: ";
    cin >> disfav;
    cout << "how many followers do you want?: ";
    cin >> connections;
    cout << "how many views do you want?: ";
    cin >> lookups;
    cout << "how many post's do you want?: ";
    cin >> totalPosts;
    cout << "what's your username? Make sure it's over 12 characters: ";
    cin >> accName;
    cout << "what's your password? Make sure it's over 12 characters?: ";
    cin >> accPass;
    cout << endl;
    //now update the class with these new details with obj.syntax to access the functions
    object.setLikes(fav);
    object.setDislikes(disfav);
    object.setFollowers(connections);
    object.setViews(lookups);
    object.setNumberOfPosts(totalPosts);
    object.setUsername(accName);
    object.setPassword(accPass);

    object.Print(); //prints the new details from the user
    cout << endl;
    //and finally let's have the constrcutor with the paramter be called, this will cause the values to be changed
    //remeber to call a constrcutor this is based on the object for the class:
    Posts object2(12, 39, 45, 54, 2, "taz", "DAV1234566789");
    object.Print();




    
    

    


}

