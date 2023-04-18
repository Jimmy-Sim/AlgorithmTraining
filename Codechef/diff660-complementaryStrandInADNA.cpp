#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    for (int i = 0; i < n; i++) {
	        char nucleotide;
	        cin >> nucleotide;
	        
	        if (nucleotide == 'A') cout << 'T';
	        else if (nucleotide == 'T') cout << 'A';
	        else if (nucleotide == 'C') cout << 'G';
	        else cout << 'C';
	    }
	    
	    cout << '\n';
	}
	
	return 0;
}