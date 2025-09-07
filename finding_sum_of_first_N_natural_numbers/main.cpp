/*
 Author: Munna
 Date: 08/09/2025
 */

/*
 Problem: Finding the sum of first n natural numbers
 formula: sum = n * ( n + 1 ) / 2
 */

#include <iostream>
using namespace std;

int main() {
    // declaring variables
    int n, i, sum;
    // user prompt
    cout << "Enter n: ";
    // taking user input
    cin >> n;
    // computing
    sum = ( n * ( n + 1 ) ) / 2;
    // showing to the user the output value
    cout << "The first n natural number of " << n << " is " << sum << endl;
    return 0;
}
