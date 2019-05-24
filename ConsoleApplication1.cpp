//get size of data types
#include <iostream>
using namespace std;

int main()
{
	cout << "Size of Char: " << sizeof(char) << endl;
	cout << "Size of Int: " << sizeof(int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of double: " << sizeof(double) << endl;

	//custom name for data type
	typedef int customName;
	customName number = 9;
	cout << "Size of new datatype: " << sizeof(customName) << endl;
	cout << "value of custom data type: " << number << endl;
	return 0;
}

