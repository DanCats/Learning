// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Enter Your Name\n";
	string name;
	cin >> name;
	cout << "Hello " << name << "\n";

	system("pause");

	return 0;
}

