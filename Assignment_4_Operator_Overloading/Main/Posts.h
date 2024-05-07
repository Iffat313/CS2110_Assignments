#pragma once
//#ifndef POSTS_H
//#define POSTS_H
//section 8.6
#include <string>
using namespace std; //In a .h file, usually you put std for strings, use this to avoid that 

class Posts
{
public:
	//below are the declarations of the overloaded functions (we'll explain what they do in .cpp file)
	//& pass by reference - no copy, const - avoid modifying anything that shouldn't be modified

	Posts operator+(const Posts& rhs); //overloaded operator+ member function, parameter takes in class object(s)

	bool operator==(const Posts& rhs);//overloaded operator== member function, parameter takes in class object(s)

	friend ostream& operator<<(ostream& out, Posts& line); //overloaded operator<< (insertion) but as a friend.
	//it is a friend because cout doesn't work with a regular overloaded insertion operator member function
	//parameter takes in output stream(act's like cout) and takes in class object


	//below are the setters and getters
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

	//comstructors will go here, recall that it's purpose its intitailze values

	Posts(); //default constructor
	Posts(int upVotes, int downVotes, int followerCount, int viewerCount, int postCount, string user, string pass); //overloading constructor

	void Print();



private:

	int likes;
	int dislikes;
	int followers;
	int views;
	int numberOfPosts;
	string userName;
	string password;

};
