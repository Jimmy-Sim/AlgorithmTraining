#include <iostream>
#include <unordered_set>

using namespace std;

int N, K;
string numbers[15];
unordered_set<string> combinations;

int main()
{
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> numbers[i];

    if (K == 2) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j == i) continue;
                string combination = numbers[i] + numbers[j];
                combinations.insert(combination);
            }
        }
    }

    else if (K == 3) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j == i) continue;
                for (int k = 0; k < N; k++) {
                    if (k == i || k == j) continue;
                    string combination = numbers[i] + numbers[j] + numbers[k];
                    combinations.insert(combination);
                }
            }
        }
    }

    else {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j == i) continue;
                for (int k = 0; k < N; k++) {
                    if (k == i || k == j) continue;
                    for (int l = 0; l < N; l++) {
                        if (l == i || l == j || l == k) continue;
                        string combination = numbers[i] + numbers[j] + numbers[k] + numbers[l];
                        combinations.insert(combination);
                    }
                }
            }
        }
    }

    cout << combinations.size() << '\n';

    return 0;
}