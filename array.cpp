#include <iostream>
using namespace std;


int main()
{
	int numItems;
	cout<< "how many items? ";
	cin>> numItems;
	int *arr = new int[numItems];
	delete[] arr;
}
