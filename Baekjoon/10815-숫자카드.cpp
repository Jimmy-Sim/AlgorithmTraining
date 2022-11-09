#include <iostream>
#include<algorithm>
using namespace std;


    long long arr1[500005];
    long long arr2[500005];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr1[i];
    }
    sort(&arr1[0], &arr1[N]);
    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> arr2[i];
    }
   

    for (int i = 0; i < M; i++) {
        long long low = 0, high = N;
        while (low < high) {
            long long mid = (low + high) / 2;
            cout << "low: " << low << " " << "high: " << high << '\n';
            if (arr1[mid] < arr2[i]) {
                low = mid + 1;
            }
            else {
                high = mid;
            }

            if (arr1[mid] == arr2[i]) {
                cout << arr2[i] << "\n";
            }
        }
    }
}