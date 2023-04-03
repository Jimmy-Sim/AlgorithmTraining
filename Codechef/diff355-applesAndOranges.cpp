#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a, b;
	cin >> a >> b;
	
	if (n >= a + b) cout << "Yes\n";
	else cout << "No\n";
	
	return 0;
}