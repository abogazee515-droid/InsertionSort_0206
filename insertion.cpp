#include <iostream>
using namespace std;

// Global array to store data (max size 20)
int arr[20];

// Variable to store number of elements
int n;

void input() {
    while (true) {
        cout << "Enter the Number of Data in the Array: ";
        cin >> n;

        // Validate input (max 20 elements)
        if (n <= 20) {
            break;
        }
        else {
            cout << "\nArray cannot be more than 20\n";
        }
    }
