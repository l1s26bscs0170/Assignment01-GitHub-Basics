/*
 * Program: Sum of First 50 Natural Numbers
 * Name: bilal khalid
 * Registration No: l1s26bscs0170
 * Assignment: 01
 */
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 50; i++) {
        sum = sum + i;
    }

    cout << "Sum = " << sum;

    return 0;
}
