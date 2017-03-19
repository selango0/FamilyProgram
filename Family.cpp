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
void Family::setParent(char FN[], char LN[], int a, int i) {
	Parent[i].FN = FN;
	Parent[i].LN = LN;
	Parent[i].age = a;
}
void Family::setChildren(char FN[], char LN[], int a, int i) {
	Children[i].FN = FN;
	Children[i].LN = LN;
	Children[i].age = a;
}

char printMenu();
void addFamily(vector<Family*> list);
void printAll(vector<Family*> list);
void printFamily(vector<Family*> list, char * n);
void deleteFamily(vector<Family*> list, char * n);
