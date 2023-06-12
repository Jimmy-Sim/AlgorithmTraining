#include <iostream>

using namespace std;

int main() {
	char letter;
	cin >> letter;
	
	if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') cout << "Vowel\n";
	else cout << "Consonant\n";
	
	return 0;
}