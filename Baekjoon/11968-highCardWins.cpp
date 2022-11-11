#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100005;

int N;
int elsieCards[MAX], bessieCards[MAX], check[MAX];
int ans;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> elsieCards[i];
        check[elsieCards[i]] = 1;
    }
    sort(&elsieCards[0], &elsieCards[N]);

    int x = 0;
    for (int i = 1; i <= 2 * N; i++) {
        if (check[i] != 1) {
            bessieCards[x] = i;
            x++;
        }
    }

    for (int i = 0; i < N; i++) {
        int elsieCard = elsieCards[i];
        for (int j = 0; j < N; j++) {
            int bessieCard = bessieCards[j];

            if (bessieCard != 0) {
                if (bessieCard > elsieCard) {
                    ans++;
                    bessieCards[j] = 0;
                    break;
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}