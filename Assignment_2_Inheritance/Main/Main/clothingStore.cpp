#include "clothingStore.h"

void clothingStore::setsize(double s1) {
	size = s1;
	if (size > 0) {
		size = s1;
	}
	else if (size == 0) {
		printWRONG();
	}
	else {
		printWRONG();
	}
}

int clothingStore::getsize() const {
	if (size > 0) {
		return size;
	}


}

void clothingStore::setgender(string g2) {
	gender = g2;
}

string clothingStore::getgender() const {
	return gender;
}

clothingStore::clothingStore() {
	size = 2.5;
	gender = "unisex";
}

clothingStore::clothingStore(double s2, string g2) {
	size = s2;
	gender = g2;
}

void clothingStore::printWRONG() {
	if (size == 0) {
		cout << "Size cannot be zero" << endl;
	}
	else {
		cout << "size cannot be negative" << endl;
	}
}
