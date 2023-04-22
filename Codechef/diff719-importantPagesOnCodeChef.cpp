#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	
	if (!a) cout << "https://www.codechef.com/practice\n";
	else {
	    if (!b) cout << "https://www.codechef.com/contests\n";
	    else cout << "https://discuss.codechef.com\n";
	}
	
	return 0;
}