#include <iostream>

using namespace std;

const int MAX = 55;

int T;
int arr[MAX];
char word[MAX], converted[MAX];

void init()
{
    for (int i = 0; i < MAX; i++) {
        converted[i] = ' ';
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
        }
        for (int j = 0; j < N; j++) {
            cin >> word[j];
        }
        

        init();

        int count = 0;

        for (int j = 0; j < N; j++) {
            int num = arr[j];
            char letter = word[j];

            if (converted[j] == ' ') {
                for (int k = j; k < N; k++) {
                    if (arr[k] == num) converted[k] = letter;
                }
            }
            else {
                if (converted[j] != letter) {
                    cout << "NO\n";
                    break;
                }
            }

            count++;
        }

        if (count == N) cout << "YES\n";
    }

    return 0;
}