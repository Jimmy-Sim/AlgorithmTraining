#include <iostream>

using namespace std;

int main() {
	int l, b;
	cin >> l >> b;
	
	if (l * b > 2 * l + 2 * b) {
	    cout << "Area\n";
	    cout << l * b << '\n';
	}
	else if (l * b == 2 * l + 2 * b) {
	    cout << "Eq\n";
	    cout << l * b << '\n';
	}
	else {
	    cout << "Peri\n";
	    cout << 2 * l + 2 * b << '\n';
	}
	
	return 0;
}