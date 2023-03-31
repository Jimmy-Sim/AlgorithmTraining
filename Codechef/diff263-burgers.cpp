#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	while (N--) {
	    int patties, buns;
	    cin >> patties >> buns;
	    
	    cout << min(patties, buns) << '\n';
	}
	
	return 0;
}