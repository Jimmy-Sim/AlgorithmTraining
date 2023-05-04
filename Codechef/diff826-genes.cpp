#include <iostream>

using namespace std;

int main() {
	char a, b;
	cin >> a >> b;
	
	if (a == b) cout << a << '\n';
	else if (a == 'R' || b == 'R') cout << "R\n";
	else cout << "B\n";
	
	return 0;
}