// Determine the factors of a number.
// Input: 75
// Output: 1, 3, 5, 15, 25, and 75

#include <iostream>
#include <vector>

using namespace std;

// Function to find and print the factors of a number
void printFactors(int num) {
    vector<int> factors;
    
    // Loop from 1 to sqrt(num) to find factors
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            factors.push_back(i);
        }
    }
    
    // Print the factors
    for (size_t i = 0; i < factors.size(); ++i) {
        if (i != 0) {
            cout << ", ";
        }
        cout << factors[i];
    }
    cout << endl;
}

int main() {
    int num;

    // Take input from the user
    cout << "Enter a number to find its factors: ";
    cin >> num;

    // Print the factors of the number
    printFactors(num);

    return 0;
}