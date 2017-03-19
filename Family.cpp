#include "Family.h"
#include<iostream>
#include <vector>

using namespace std;

void Family::setName(char n[]) {
	name = n;
}

char* Family::getName() {
	return name;
}
vector<Person> Family::getParents() {
	return Parent;
}
vector<Person> Family::getChildren() {
	return Children;
}
void Family::setParent(char FN[], char LN[], int a) {
	Parent[i].FN = FN;
	Parent[i].LN = LN;
	Parent[i].age = a;
}
void Family::setChildren(char FN[], char LN[], int a) {
	Person child;
	Children[i].FN = FN;
	Children[i].LN = LN;
	Children[i].age = a;

	Children.push_back(child);
}

