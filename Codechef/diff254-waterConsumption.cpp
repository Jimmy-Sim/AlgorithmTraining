#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    while (N--) {
        int amount;
        cin >> amount;
        
        if (amount >= 2000) cout << "YES\n";
        else cout << "NO\n";
    }
	
	return 0;
}