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
	static int count;
public:
	Magazine();
	Magazine(string n, string d, string t, string e, int y);
	void Input();
	void Print();

	void SetName(string n);
	void SetDescription(string d);
	void SetTell(string t);
	void SetEmail(string e);
	void SetYear(int y);

	string GetName();
	string GetDescription();
	string GetTell();
	string GetEmail();
	int GetYear();

	static void PrintCount();
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
	count++;
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
	count++;
}

inline void Magazine::Print()
{
	cout << "Name: " << name << endl;
	cout << "Description: " << description << endl;
	cout << "Tell: " << tel << endl;
	cout << "Email: " << email << endl;
	cout << "Year: " << year << endl;
}

inline void Magazine::SetName(string n)
{
	name = n;
}

inline void Magazine::SetDescription(string d)
{
	description = d;
}

inline void Magazine::SetTell(string t)
{
	tel = t;
}

inline void Magazine::SetEmail(string e)
{
	email = e;
}

inline void Magazine::SetYear(int y)
{
	if (y > 0)
	{
		year = y;
	}
}

inline string Magazine::GetName()
{
	return name;
}

inline string Magazine::GetDescription()
{
	return description;
}

inline string Magazine::GetTell()
{
	return tel;
}

inline string Magazine::GetEmail()
{
	return email;
}

inline int Magazine::GetYear()
{
	return year;
}

int Magazine::count = 0;
inline void Magazine::PrintCount()
{
	cout << "Count of objects: " << count << endl;
}



