#include "Posts.h"


#include<iostream>
using namespace std;

//the Post.cpp defines all the member functions and constructors from the associated class

//below are the impkementation's of the overloaded operator member functions

Posts Posts::operator+(const Posts& rhs) {
	Posts thirdclassobj; //declare another class object. This object will be used to embed the values for third object
	//you can name it anything, I named it this purely for cohesivness
	// 
						//lhs class obj + rhs class obj (parameter doesn't show lhs but it requires it for this function to be called
	thirdclassobj.likes = (likes + rhs.likes) * 2;
	thirdclassobj.dislikes = (dislikes + rhs.dislikes) * 2;
	thirdclassobj.views = (views + rhs.views) * 2;
	thirdclassobj.followers = (followers + rhs.followers) * 2;
	thirdclassobj.numberOfPosts = (numberOfPosts + rhs.numberOfPosts) * 2;


	//the sum (+) of the class objects returns not only the addition but the multiplication of the attributes for the other two objects
	// this will create "a" SUPER account with high followers, posts, etc. 
	return thirdclassobj; //return the "third class object" so that third class recognizes it's new properties
}

bool Posts::operator==(const Posts& rhs) {
	//the functionality of the equal overloaded operator is to see if two class objects are equal
	//we will do so, under the basis on whether the first class object's (user ) is equal to the second (user)
	//if true, it will return true, otherwise will return false

	return(userName == rhs.userName);
		//lhs object and rhs object, again despite the parameter taking only one class object, it recognizes the lhs class object based on 
		//the syntax we use to call this function
	
}

//before we define the insertion overloaded operator member function, let's define a couple of things
//1. we do not use the regular overloaded insertion operator, because "cout" would cause a complier error
//2. Thus, we use a friend function, despite it being declared in the class it is a non-member function for the class
//3. This means that when we implement it, there is no need for a scope resolution operator and the class name (synatx below)
//4. Instead of working with three class objects, we will be working with one class object (the class object called by cout)
//4. The purpose of this function is were going to read what the contents of the third class's attributes
ostream& operator<<(ostream& out, Posts& line) {
	//out acts like a cout, but think of it a variable that stores a lot of text, variables, etc
	
	out << "user: " << line.userName << endl; //Great illustration of the power of out
	out << "pass: " << line.password << endl;
	out << "likes: " << line.likes << endl;
	out << "dislikes: " << line.dislikes << endl;
	out << "followers: " << line.followers << endl;
	out << "posts: " << line.numberOfPosts << endl;

	return out; //output stream containing a string representation of a line object

}


//below are the setters and getters
void Posts::setLikes(int upVotes) {
	likes = upVotes;
}

int Posts::getLikes() const {
	return likes;
}

//

void Posts::setDislikes(int downVotes) {
	dislikes = downVotes;
}

int Posts::getDislikes() const {
	return dislikes;
}

//

void Posts::setFollowers(int followerCount) {
	followers = followerCount;
}

int Posts::getFollowers() const {
	return followers;
}

//

void Posts::setViews(int viewerCount) {
	views = viewerCount;
}

int Posts::getViews() const {
	return views;
}

//

void Posts::setNumberOfPosts(int postCount) {
	numberOfPosts = postCount;
}

int Posts::getNumberOfPosts() const {
	return numberOfPosts;
}

//

void Posts::setUsername(string user) {
	if (user.size() < 12) {
		userName = "This user is not avaliable";
	}
	else {
		userName = user;
	}
}

string Posts::getUsername() const {
	return userName;
}

//

void Posts::setPassword(string pass) {
	if (pass.size() < 12) {
		password = "This password is not sufficent, Please change it to more characters";

	}

	else {
		password = pass;
	}
}

string Posts::getPassword() const {
	return password;
}

void Posts::Print() {
	cout << "Likes: " << likes << endl;
	cout << "dislikes: " << dislikes << endl;
	cout << "followers: " << followers << endl;
	cout << "views: " << views << endl;
	cout << "number of posts: " << numberOfPosts << endl;
	cout << "username: " << userName << endl;
	cout << "password: " << password << endl;
	cout << endl;

}

//constructors are below

Posts::Posts() {

	likes = 135;
	dislikes = 56;
	followers = 39;
	views = 290;
	numberOfPosts = 50;
	userName = "GuestAccount#43567";
	password = "!xYz_Poic";


}

Posts::Posts(int upVotes, int downVotes, int followerCount, int viewerCount, int postCount, string user, string pass) {

	likes = upVotes;
	dislikes = downVotes;
	followers = followerCount;
	views = viewerCount;
	numberOfPosts = postCount;
	userName = user;
	password = pass;


}

//there is no code needed to indicate the program that the cpp file is done
