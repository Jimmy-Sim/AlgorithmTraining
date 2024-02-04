#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
	cin >> N;

	vector<set<string>> cows;
	set<string> totalSet;
	for (int i = 0; i < N; i++) {
		int K;
		cin >> K;
        
		set<string> currCow;
		for (int j = 0; j < K; j++) {
			string characteristic;
			cin >> characteristic;
            
			currCow.insert(characteristic);
		}
        
		totalSet.insert(currCow.begin(), currCow.end());
		cows.push_back(currCow);
	}

	vector<string> totalCharacters(totalSet.begin(), totalSet.end());

	for (int i = 0; i < totalCharacters.size(); i++) {
		for (int j = i + 1; j < totalCharacters.size(); j++) {
			bool both = false, onlyA = false, onlyB = false;
			for (const set<string> &c : cows) {
				bool a = c.count(totalCharacters[i]), b = c.count(totalCharacters[j]);
				if (a && b) both = true;
                else if (a && !b) onlyA = true;
                else if (!a && b) onlyB = true;
			}
            
			if (onlyA && onlyB && both) {
				cout << "no\n";
                
				return 0;
			}
		}
	}

	cout << "yes\n";
    
    return 0;
}
