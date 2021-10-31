#include <iostream>
#include<Math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    long double x = 1.82 , y = 18.23 , z;
    
    cout << "Введите значение z: ";
    cin >> z;
    long double resf, resw;
    resf = pow(x, y / x) + pow(sqrt(abs(pow(y,2))), 3) * exp(x);
    resw = log10( sqrt(exp(x-y)) + pow(z,2));
    cout << "значение функции f:" << resf << "\nзначение функции w:" << resw;
}