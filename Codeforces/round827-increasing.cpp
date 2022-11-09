#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
    int N;
    cin >> N;
 
    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;
 
        if (M == 1) {
            int num;
            cin >> num;
            
            cout << "YES\n";
            continue;
        }
        else {
            int arr[105], check = 0;
            for (int i = 0; i < M; i++) {
                cin >> arr[i];
            }
            sort(&arr[0], &arr[M]);
 
            for(int i = 1; i < M; i++) {
                if (arr[i] == arr[i - 1]) {
                    check = 1;
                }
            }
 
            if (check == 0) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
 
    return 0;
}