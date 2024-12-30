#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter array element: ";
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout <<i << endl;
        }
    }

    return 0;
}
