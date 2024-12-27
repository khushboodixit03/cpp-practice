#include <iostream>
using namespace std;

void divisible(int n, int i) {
    // Base case: if i exceeds n, return -1 (or any invalid number)
    if (i > n) return;
    
    // If i is divisible by 4, return it
    if (i % 4 == 0) {
        cout<<i<<" ";
    }
    
    // Recursive call for the next number
    divisible(n, i + 1);
}

int main() {
    int n;
    cin >> n;
    int i = 1;
  divisible(n, i);
    
    return 0;
}
