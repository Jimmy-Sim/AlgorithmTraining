#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	string phrase, subPhrase;
	cin >> phrase >> subPhrase;

	string censoredPhrase;
	for (int i = 0; i < phrase.size(); i++) {
		censoredPhrase += phrase[i];
		if (censoredPhrase.size() > subPhrase.size() && censoredPhrase.substr(censoredPhrase.size() - subPhrase.size()) == subPhrase) censoredPhrase.resize(censoredPhrase.size() - subPhrase.size());
	}
    
	cout << censoredPhrase << '\n';
}
