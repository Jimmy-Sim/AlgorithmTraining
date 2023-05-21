#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n == 2 || n == 3) return true;

    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

int main()
{
    int A, B, digit;
    cin >> A >> B >> digit;

    vector<int> primes;
    for (int i = A; i <= B; i++) {
        if (isPrime(i)) primes.push_back(i);
    }

    int cnt = 0;
    for (int i = 0; i < primes.size(); i++) {
        while (primes[i] > 0) {
            if (primes[i] % 10 == digit) {
                cnt++;
                break;
            }
            primes[i] /= 10;
        }
    }

    cout << cnt << '\n';

    return 0;
}