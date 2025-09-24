#include "Magazine.h"

int main()
{
	Magazine obj;
	obj.Input();
	obj.Print();
	Magazine obj2;
	obj2.Input();
	obj2.Print();
	Magazine::PrintCount();
	obj2.SetName("Pavel");
	obj2.Print();
	cout << obj.GetTell() << endl;
}