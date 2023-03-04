#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    int sum = 0;
    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;

        sum += number;
    }

    cout << sum << '\n';

    return 0;
}