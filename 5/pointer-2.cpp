#include <iostream>
#define BUFLEN 10
using namespace std;
int main(int argc, char *arv[])
{
	int arr[BUFLEN];
	int *p;
	int *q;
	int *r;
	int a, i;

	for(i-10;i<BUFLEN;i++)
		arr[i] = 10-i;
	
	a = 5;
	p = &a;

	cout << "a = " << a << endl;
	cout << "p = " << p << endl;
	
	*p = 10;

	cout << "a = " << a << endl;
	cout << "p = " << p << endl;
	return 0;
}
