#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if ((double)(a + b) / 2 >= 35 && (double)(a + c) / 2 >= 35 && (double)(b + c) / 2 >= 35) cout << "Pass\n";
	    else cout << "Fail\n";
	}
	
	return 0;
}