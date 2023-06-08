#include <iostream>
using namespace std;

int main()
{
	int uninitializedInt;
	int initializedInt { 7 };
	cout << format("{} is a random value", uninitializedInt) << endl;
	cout << format("{} was assigned an initial value", initializedInt) << endl;
}

/* Point
C++ 20 : cout << format 
*/