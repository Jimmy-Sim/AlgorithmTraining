#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    long long factorial = 1;
	    for (int i = n; i >= 1; i--) factorial *= i;
	    
	    cout << factorial << '\n';
	}
	
	return 0;
}