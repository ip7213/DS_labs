// Lab2_ip7213_DS.cpp: определяет точку входа для консольного приложения.
//
#include "string"
#include "stdafx.h"
#include "Tree.h"
#include "iostream"
using namespace std;

int main()
{
	Tree tree;
	tree.push("Hello", "MAIN");
	tree.push("Hell", "MAIN -> LEFT");
	tree.push("Hellp", "MAIN -> RIGHT");
	tree.push("Hellr", "MAIN -> RIGHT -> RIGHT");
	tree.push("Hellq", "MAIN -> RIGHT -> RIGHT -> LEFT");
	tree.push("Hel", "MAIN -> LEFT -> LEFT");
	string s = tree.findLeft();
	int a = tree.find(s);
	cout << s << "\n" << a << endl;
    return 0;
}

