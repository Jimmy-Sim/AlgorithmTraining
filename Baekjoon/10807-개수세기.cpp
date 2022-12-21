#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[105];
    for (int i = 0; i < N; i++) cin >> arr[i];

    int num;
    cin >> num;

    int count = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] == num) count++;
    }

    cout << count << "\n";

    return 0;
}