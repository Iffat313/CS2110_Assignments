#pragma once
//#ifndef POSTS_H
//#define POSTS_H
//section 8.6
#include <string>

using namespace std; //In a .h file, usually you put std for strings, use this to avoid that 

class Posts
{
public:
	void setLikes(int upVotes); //mutator: modifies private data, basically has it equal to it 
	int getLikes() const; //accessor: is a getter, usually a non data type funct, const, returns data

	//

	void setDislikes(int downVotes); //mutator
	int getDislikes() const; //accessor 

	//

	void setFollowers(int followerCount);//Mutator
	int getFollowers() const; //accessor 

	//

	void setViews(int viewerCount); //Mutator
	int getViews() const; //accessor

	//

	void setNumberOfPosts(int postCount); //Mutator
	int getNumberOfPosts() const; //accessor


	//

	void setUsername(string user); //Mutator
	string getUsername() const; //accessor

	//

	void setPassword(string pass); //Mutator
	string getPassword() const; //accessor

	void setchangeName(string* change, string New); //Mutator
	string getchangeName() const; //Accessor

	//comstructors will go here, recall that it's purpose its intitailze values

	Posts(); //default constructor
	Posts(int upVotes, int downVotes, int followerCount, int viewerCount, int postCount, string user, string pass, string l); //overloading constructor

	void Print();

	//destructor
	~Posts(); //the syntax for declaring a destrcutor 



private:

	int likes;
	int dislikes;
	int followers;
	int views;
	int numberOfPosts;
	string userName;
	string password;

	//In your class; declare one or more data members as a pointer variable
	//To be clear, the data members in the class refer to the attributes 
	//the member functions are the functions or methods in our class
	//we need to a create a ptr of any attribute
	string* changeName;
	
};