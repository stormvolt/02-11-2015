#include <iostream>
using namespace std;

int *getPtrToFive()
{
	int *x = new int;
	*x = 5;
	return x;
}

int main()
{
	int *p = getPtrToFive();
	cout<< *p <<endl;
	delete p;
}
