// If a number is divisible by 43, then print "Foo". If a number is divisible by 73, then print "Bar". If a number is divisible by 43 and 73, then print "Foo Bar".
// You need to take input from the end user. Do NOT have any static input while writing the program.

#include <iostream>
using namespace std;

void checkDivisibility(int num) {
    if (num % 43 == 0 && num % 73 == 0) {
        cout << "Foo Bar" << endl;
    } else if (num % 43 == 0) {
        cout << "Foo" << endl;
    } else if (num % 73 == 0) {
        cout << "Bar" << endl;
    } else {
        cout << "The number is not divisible by 43 or 73" << endl;
    }
}

int main() {
    int num;

    // Take input from the user
    cout << "Enter a number to check divisibility: ";
    cin >> num;

    // Check divisibility and print the result
    checkDivisibility(num);

    return 0;
}