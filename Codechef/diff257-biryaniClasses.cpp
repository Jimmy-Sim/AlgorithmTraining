#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	while (N--) {
	    int weeks, cost;
	    cin >> weeks >> cost;
	    
	    cout << weeks * cost << '\n';
	}
	
	return 0;
}