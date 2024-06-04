#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}


void printNPrimes(int n) {
    int count = 0;  
    int num = 2;   

    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of prime numbers to print: " << endl;
    cin >> n;
    printNPrimes(n);
    return 0;
}

