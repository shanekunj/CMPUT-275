#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int m, n;
    float first;
    cin >> m >> n;
    first = log(n) / log(m);
    if (first == (int)first) {
        cout << "GOOD" << endl;
    } else {
        cout << "BAD" << endl;
    }
    
    return 0;
}