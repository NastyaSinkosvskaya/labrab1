

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    bool check = true;
    cout << "n: "; cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "[" << i + 1 << "]: ";
        cin >> array[i];
    }

    if (array[0] > array[1] && n >= 3)
    {
        for (int i = 0; i < n - 2; i += 2) {
            if (array[i] <= array[i + 1] || array[i + 1] >= array[i + 2]) {
                check = false;
                break;
            }
        }
    }
    else if (array[0] < array[1] && n >= 3)
    {
        for (int i = 0; i < n - 2; i += 2)
        {
            if (array[i] >= array[i + 1] || array[i + 1] <= array[i + 2])
            {
                check = false;
                break;
            }
        }
    }
    else check = false;
    if (!check) cout << "Последовательность не пиловидная";

    else cout << "Последовательность пиловидная";
}