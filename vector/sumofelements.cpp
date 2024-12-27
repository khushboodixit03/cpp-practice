#include <iostream>
#include <vector>
using namespace std;

void sumofarray(const vector<int>& v, int& sum, int i) {
    if (i == v.size()) {
        return;
    }
    
    // Add current element to sum
    sum += v[i];
    
    // Recursive call for the next element
    sumofarray(v, sum, i + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4}; // Initialization of vector

    int sum = 0; 
    sumofarray(v, sum, 0); // Start summing from the first index

    // Print the final sum
    cout << "Sum of array: " << sum << endl;

    return 0;
}
