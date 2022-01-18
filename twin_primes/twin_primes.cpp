// --------------------------------------
// Name: Shane Kunjachen
// ID: 1658745
// CCID: kunjache
// CMPUT 275, Winter 2022
//
// Weekly Exercise 1: Twin Primes
// --------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {

    int counter = 2;

    if (n <= 1) {
        return false;
    }   
    
    while (counter <= sqrt(n)) {
        if (n % counter == 0) {
            return false;
        } else {
            counter += 1;
        }
    }

    return true;

}

void twinPrimes(int k) {

    int counter = 0;
    int i = 3;

    while (counter != k) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << i << " " << i + 2 << endl;
            counter += 1;
        }
        i += 1;
    }
    
}

int main() {

    char toggle;
    int value;

    cin >> toggle >> value;

    if (toggle == 'p') {
        if (isPrime(value)) {
            cout << "prime" << endl;
        } else {
            cout << "not prime" << endl;
        }
    } else {
        twinPrimes(value);
    }

}
