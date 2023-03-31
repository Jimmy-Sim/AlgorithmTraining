#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	
	while (T--) {
	    int income;
	    cin >> income;
	    
	    if (income > 100) income -= 10;
	    
	    cout << income << '\n';
	}
	
	return 0;
}