#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    int aFloor, bFloor;
	    if (a % 10 != 0) aFloor = a / 10 + 1;
	    else aFloor = a / 10;
	    if (b % 10 != 0) bFloor = b / 10 + 1;
	    else bFloor = b / 10;
	    
	    cout << max(aFloor, bFloor) - min(aFloor, bFloor) << '\n';
	}
	
	return 0;
}