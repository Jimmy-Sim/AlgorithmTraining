#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    int N;
    cin >> N;
    
    long long solutions[5005];
    for (int i = 0; i < N; i++) cin >> solutions[i];
    sort(&solutions[0], &solutions[N]);
    
    long long result = 3000000001, ans[5];
    for (int i = 0; i < N - 2; i++) {
        int low = i + 1, high = N - 1;
        while (low < high) {
            long long sum = solutions[i] + solutions[low] + solutions[high];
            if (abs(sum) < result) {
                result = abs(sum);
                ans[0] = solutions[i], ans[1] = solutions[low], ans[2] = solutions[high];
            }
            
            if (sum < 0) low++;
            else high--;
        }
    }
    
    for (int i = 0; i < 3; i++) cout << ans[i] << ' ';
    cout << '\n';
    
    return 0;
}
