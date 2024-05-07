

#include "Posts.h"
#include<iostream>
using namespace std;

//the Post.cpp defines all the member functions and constructors from the associated class

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

void Posts::setchangeName(string* change, string New) {
	changeName = change;//essentially passby reference with a string
	*changeName = New;
}

string Posts::getchangeName() const {
	return *changeName;
}

void Posts::Print() {
	cout << "here's the details on your account" << endl;
	cout << "Likes: " << likes << endl;
	cout << "dislikes: " << dislikes << endl;
	cout << "followers: " << followers << endl;
	cout << "views: " << views << endl;
	cout << "number of posts: " << numberOfPosts << endl;
	cout << "username: " << userName << endl;
	cout << "password: " << password << endl;
	cout << "here's the new name: " << *changeName << endl;
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
	changeName = new string; //allocates memory for a string type
	*changeName = "GuestAccount#98765";


}

Posts::Posts(int upVotes, int downVotes, int followerCount, int viewerCount, int postCount, string user, string pass, string l) {

	likes = upVotes;
	dislikes = downVotes;
	followers = followerCount;
	views = viewerCount;
	numberOfPosts = postCount;
	userName = user;
	password = pass;
	changeName = new string;
	*changeName = l;


}

Posts::~Posts() {
	delete changeName; //the destructor will deallocate the dynamaically allocated memeory for the string type;
}

//there is no code needed to indicate the program that the cpp file is done
