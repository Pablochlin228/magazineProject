#pragma once
#include <iostream>
#include <string>
using namespace std;

class Magazine
{
	string name;
	string description;
	string tel;
	string email;
	int year;
public:
	Magazine();
	Magazine(string n, string d, string t, string e, int y);
	void Input();
	void Print();

	/*void SetName(string n);
	void SetDescription(string d);
	void SetTell(string t);
	void SetEmail(string e);
	void SetYear(int y);

	void GetName(string n);
	void GetDescription(string d);
	void GetTell(string t);
	void GetEmail(string e);
	void GetYear(int y);*/
};

Magazine::Magazine()
{
	year = 0;
}

inline Magazine::Magazine(string n, string d, string t, string e, int y)
{
	name = n;
	description = d;
	tel = t;
	email = e;
	year = y;
}

inline void Magazine::Input()
{
	char buff[100];
	cout << "Enter the name of the magazine: " << endl;
	cin.getline(buff, 100);
	name = buff;
	cout << "Enter the description of the magazine: " << endl;
	cin.getline(buff, 100);
	description = buff;
	cout << "Enter the tell number of the magazine: " << endl;
	cin.getline(buff, 100);
	tel = buff;
	cout << "Enter the email of the magazine: " << endl;
	cin.getline(buff, 100);
	email = buff;
	cout << "Enter the year of the magazine: " << endl;
	cin >> year;
}

inline void Magazine::Print()
{
	cout << "Name: " << name << endl;
	cout << "Description: " << description << endl;
	cout << "Tell: " << tel << endl;
	cout << "Email: " << email << endl;
	cout << "Year: " << year << endl;
}
