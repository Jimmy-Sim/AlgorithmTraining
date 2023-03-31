#include <iostream>

using namespace std;

bool isConsonant(char letter) {
    if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u') return true;
    
    return false;
}

int main() {
	int T;
	cin >> T;
	
	while (T--) {
	    int N;
	    string phrase;
	    cin >> N >> phrase;
	    
	    bool easy = true;
	    for (int i = 0; i <= N - 4; i++) {
	        if (isConsonant(phrase[i]) && isConsonant(phrase[i + 1]) && isConsonant(phrase[i + 2]) && isConsonant(phrase[i + 3])) {
	            easy = false;
	            break;
	        }
	    }
	    
	    if (easy) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}