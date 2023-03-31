#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	while (N--) {
	    int x, y;
	    cin >> x >> y;
	    
	    cout << y * (x / 10) << '\n';
	}
	
	return 0;
}