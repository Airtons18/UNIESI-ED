#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int var = 5;
	int var2 = 10;
	int *pvar;
	var2 = var;
	pvar = &var;
	*pvar = 15; 
	cout << *pvar << endl;
	cout << var << endl;
	cout << var2 << endl;
	return 0;
}


