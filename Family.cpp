#include "Family.h"
#include<iostream>
#include <vector>

using namespace std;

void Family::setName(char n[30]) {
	strcpy_s(name, 29, n);
}

char* Family::getName() {
	return name;
}

char* Family::getParents() {
	return Parent;
}

char* Family::getChildren() {
	return Children;
}

void Family::setParent(char FN[], char LN[], int age, int index) {
	strcpy_s(Parent[index].firstName, 29, FN);
	strcpy_s(Parent[index].lastName, 29, LN);
	Parent[index].age = age;
}
void Family::setChildren(char FN[], char LN[], int age, int index) {
	strcpy_s(Children[index].firstName, 29, FN);
	strcpy_s(Children[index].lastName, 29, LN);
	Children[index].age = age;
}

