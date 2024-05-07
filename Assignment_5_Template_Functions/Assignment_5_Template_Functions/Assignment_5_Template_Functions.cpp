// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Posts.h"
#include <iostream>
#include<string>

using namespace std;

bool operator>(const Posts& lhs, const Posts& rhs);
template <typename T> void bubbleSort(T array[], int size);
template <typename T> void swapValues(T& val1, T& val2);

int main()
{   
/*the data member(from the class object) that will be used to
determine the order of the class object will be the follower
count for the blog post account.*/
    Posts array[10]; //creates an array of Posts class objects that can contain 10 class objects of type Posts. Deespite each class name having the same name, each of the classes will be different from one another
    int array2[10]; //creates an array of 10 integers
    Posts f; //this is the class object were going to be crearting variations of for the array to keep record of
    int follower; //parameter for function 
    int integer; //user input

    
    /*This for loop intializes the 10 class objects into the array by the user input,  */
    for (int i = 0; i < 10; i++) {
        cout << "Write the follower count for blog account #" << i << ": ";
        cin >> follower;
        f.setFollowers(follower);
        array[i] = f; //this array saves a record of each variation of Posts object
        //but aren't these all the same objects? as each object has the same name
    }

    cout << endl;
    //before we sort the array of class object's, let's cout the unsorted array of class objects first
    cout << "Below is the output of the unsorted array of class objects: " << endl;
    cout << array;
    cout << endl;

    //bubble sort the array of  class objects and output the now sorted array of class objects
    bubbleSort(array, 10);
    cout << "below is the output for the sorted array of class objects for the follower count: ";
    cout << endl;
    cout << array; 
    cout << endl;

    //get the user input integers 
    for (int i = 0; i < 10; i++) {
        cout << "Enter your choice of intger for the array at index #" << i << ": ";
        cin >> integer;
        array2[i] = integer;
    
    }
    
    cout << endl;

    cout << "Below is the ouput of the unsorted array of integers: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << array2[i] << " "; //this will NOT call the overloaded insertion operator, parameter doesn't match
    }
    
    //bubble sort the array of integers - SAME TEMPLATE FUNCTION
   bubbleSort(array2, 10);
    
   //cout the now sorted array of class objects 
 /*   for (int i = 0; i < 10; i++) {
        f = array[i]; 
        cout << f.getFollowers() << endl; or cout << array[i].getFollowers();
    } */



  
   cout << endl;
   cout << "Below is the output of sorted array of integers " << endl;
   for (int i = 0; i < 10; i++) {
       cout << array2[i] << " "; //this will NOT call the overloaded insertion operator, parameter doesn't match
   }


   //deployment package to build for zone 6

}

bool operator>(const Posts& lhs, const Posts& rhs) {
    return lhs.getFollowers() > rhs.getFollowers();

}


template <typename T>
void bubbleSort(T array[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {
            if (array[i] > array[i + 1]) {
                swapValues(array[i], array[i + 1]);
            }
        }
    }
}



template <typename T>
void swapValues(T& val1, T& val2) {
    T temp = val1;
    val1 = val2;
    val2 = temp;
}




