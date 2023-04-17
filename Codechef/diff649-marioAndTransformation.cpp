#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    string state = "NORMAL";
	    while (n--) {
	        if (state == "SMALL") state = "NORMAL";
	        else if (state == "NORMAL") state = "HUGE";
	        else state = "SMALL";
	    }
	    
	    cout << state << '\n';
	}
	
	return 0;
}