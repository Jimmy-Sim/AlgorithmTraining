#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int gcd_ab = gcd(a, b);
        long long lcm_ab = (long long)(a / gcd_ab) * b; // To avoid integer overflow
        
        cout << gcd_ab << ' ' << lcm_ab << '\n';
    }
    
    return 0;
}