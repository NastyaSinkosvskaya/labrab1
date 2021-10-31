#include <iostream>
#include<Math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	long double x, y;
	cin >> x >> y;
	long double ressred,resgeo;
	ressred = (x + y) / 2;
	resgeo = sqrt(x * y);
	cout << "среднее: " << ressred << " корень: " << resgeo;
}