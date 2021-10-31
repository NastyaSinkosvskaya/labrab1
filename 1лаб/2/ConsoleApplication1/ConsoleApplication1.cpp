#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n,nres;
	cin >> n;
	nres = n;
	swap(nres[2],nres[1]);
	cout << n << " " << nres;
}