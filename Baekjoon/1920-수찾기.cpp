#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int N;
    cin >> N;

    int arr1[100005];
    for (int i = 1; i <= N; i++) {
        cin >> arr1[i];
    }

    int M;
    cin >> M;

    int arr2[100005];
    for (int i = 1; i <= M; i++) {
        cin >> arr1[i];
    }

    return 0;
}