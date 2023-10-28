#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
 
    int lessons[100005];
    int low = 1, high = 0;
    for (int i = 0; i < N; i++) {
        cin >> lessons[i];
        high += lessons[i];
    }

    int total, result = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        total = mid;
        bool possible = true;
        int cnt = 1;
        
        for (int i = 0; i < N; i++){
            if (mid < lessons[i]) {
                possible = false;
                break;
            }
            if (total < lessons[i]) {
                total = mid;
                cnt++;
            }
            total -= lessons[i];
        }
        if (cnt > M || !possible) low = mid + 1;
        else if (cnt <= M){ 
            high = mid - 1;
            result = mid;
        }
    }
    
    cout << result << '\n';
 
    return 0;
}
