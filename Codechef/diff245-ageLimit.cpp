#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	while (N--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (c >= a && c < b) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}