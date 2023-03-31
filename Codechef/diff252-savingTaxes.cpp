#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	while (N--) {
	    int x, y;
	    cin >> x >> y;
	    
	    cout << x - y << '\n';
	}
	
	return 0;
}