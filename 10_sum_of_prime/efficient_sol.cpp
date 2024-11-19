#include <bits/stdc++.h>
using namespace std;

int primeSum(int n) {
    if (n < 2) return 0; // No primes less than 2

    vector<bool> is_prime(n + 1, true); // Create a boolean array
    is_prime[0] = is_prime[1] = false;  // 0 and 1 are not primes

    // Sieve of Eratosthenes
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false; // Mark multiples of i as non-prime
            }
        }
    }

    // Calculate the sum of all primes
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) sum += i;
    }

    return sum;
}

int main() {
    int result;
    cin >> result;  // Input the value of n
    cout << primeSum(result) << endl; // Output the sum of primes
    return 0;
}
