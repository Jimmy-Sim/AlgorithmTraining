#include <iostream>

using namespace std;

const int MAX = 1000000001;

int N, Q;
int farm[MAX], queries[MAX][5];
int haybalePrefSum[MAX];

int main()
{
    cin >> N >> Q;
    for (int i = 0; i < N; i++) {
        int position;
        cin >> position;
        farm[position]++;
    }
    for (int i = 0; i < Q; i++) cin >> queries[i][1] >> queries[i][2];

    for (int i = 0; i <= 1000000000; i++) {
        if (farm[i] > 0) haybalePrefSum[i]++;
        haybalePrefSum[i] += haybalePrefSum[i - 1];
    }

    for (int i = 0; i < 10; i++) cout << haybalePrefSum[i] << " ";

    cout << "\n";

    return 0;
}