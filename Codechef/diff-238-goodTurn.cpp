#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    while (N--) {
        int x, y;
        cin >> x >> y;
        
        if (x + y > 6) cout << "YES\n";
        else cout << "NO\n";
    }
    
	return 0;
}