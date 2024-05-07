#pragma once
//#ifndef POSTS_H
//#define POSTS_H
//section 8.6
#include <string>
using namespace std; //In a .h file, usually you put std for strings, use this to avoid that 

class Posts
{
public:

	//declaration of the overloaded insertion operator:
	friend ostream& operator<<(ostream&, Posts list[]);

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


