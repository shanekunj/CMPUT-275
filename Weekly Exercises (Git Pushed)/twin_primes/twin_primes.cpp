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

/*
    Determines whether a number is prime or not.

    Arguments:
        - n (int): the number inputted by a user that is being checked to see
             whether it is prime or not.
    
    Return:
        - boolean true: if the number is determined to be prime
        - boolean false: if the number is determined to be not prime
*/
bool isPrime(int n) {

    // This function will use the square root method to determine if a number
    // is prime or not. Since one of the factors of a non prime number must be
    // less than the square root of the number, and 2 is the first perfect
    // square root after 1, we initilize the counter at 2.
    int counter = 2;

    // 0 and 1 are known to be not prime numbers
    if (n <= 1) {
        return false;
    }   
    
    // we want to check every integer up to and including the square root of n
    // if applicable. If there is an integer that has no remainder when n is
    // divided by said number, it is determined to be not prime.
    while (counter <= sqrt(n)) {
        if (n % counter == 0) {
            return false;
        } else {
            counter += 1;
        }
    }

    return true;

}

/*
    Prints the first k twin prime number pairs, with k being user inputted.

    Arguments:
        - k (int): the number of twin prime pairs to print
    
    Return:
        - none
*/
void twinPrimes(int k) {
    
    // keep track of how many twin prime pairs have been printed
    int counter = 0;

    // 0 and 1 are known to be prime numbers 
    int i = 2;

    // print out only the prime numbers that are two numbers apart until k
    // pairs have been printed
    while (counter != k) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << i << " " << i + 2 << endl;
            counter += 1;
        }
        i += 1;
    }
    
}

int main() {

    char toggle;    // determines which function to call
    int value;      // the argument of the toggled function

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