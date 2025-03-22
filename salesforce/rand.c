#include<iostream>
using namespace std;
int factorial(int n) {
    if (n < 0) return 0;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
bool isPrime(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false; 
    }
    return true;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int fact = factorial(number);
    cout << "Factorial of " << number << " is: " << fact << endl;
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    return 0;
}