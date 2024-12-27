#include <iostream>
using namespace std;
int main()
{
    int n;
    int f = 1;
    cout << "enter the number: ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    cout << f;
}

