#include <iostream>
#include <algorithm>

using namespace std;

int arr[10];

int main()
{
    int sum = 0, avg, median;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / 5;

    sort(&arr[0], &arr[5]);
    median = arr[2];

    cout << avg << "\n";
    cout << median << "\n";

    return 0;
}