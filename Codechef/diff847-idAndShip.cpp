#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    char id;
	    cin >> id;
	    
	    if (id == 'B' || id == 'b') cout << "BattleShip\n";
	    else if (id == 'C' || id == 'c') cout << "Cruiser\n";
	    else if (id == 'D' || id == 'd') cout << "Destroyer\n";
	    else cout << "Frigate\n";
	}
	
	return 0;
}