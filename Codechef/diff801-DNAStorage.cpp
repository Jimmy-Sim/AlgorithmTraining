#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    string bin;
	    cin >> bin;
	    
	    string code = "";
	    for (int i = 0; i < bin.size(); i += 2) {
	        if (bin[i] == '0') {
	            if (bin[i + 1] == '0') code += 'A';
	            else code += 'T';
	        }
	        else {
	            if (bin[i + 1] == '0') code += 'C';
	            else code += 'G';
	        }
	    }
	    
	    cout << code << '\n';
	}
	
	return 0;
}