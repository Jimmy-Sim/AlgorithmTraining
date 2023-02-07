#include <iostream>
#include <algorithm>

using namespace std;

int N;
int numbers[505], sum;
double mean, median;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    mean = (double)sum / N;
    
    sort(&numbers[0], &numbers[N]);
    if (N % 2 == 0) median = (double)(numbers[N / 2 - 1] + numbers[N / 2]) / 2;
    else median = numbers[N / 2];

    cout << mean << '\n';
    cout << median << '\n';

    return 0;
}