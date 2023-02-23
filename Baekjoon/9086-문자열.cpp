#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        string phrase;
        cin >> phrase;

        cout << phrase[0] << phrase[phrase.size() - 1] << '\n';
    }

    return 0;
}