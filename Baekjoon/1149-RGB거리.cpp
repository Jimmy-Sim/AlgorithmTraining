#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N;
    cin >> N;

    int house[1005][3];
    house[0][0] = 0, house[0][1] = 0, house[0][2] = 0;
    
    for (int i = 1; i <= N; i++) {
        int cost1, cost2, cost3;
        cin >> cost1 >> cost2 >> cost3;
        
        house[i][0] = min(house[i - 1][1], house[i - 1][2]) + cost1;
        house[i][1] = min(house[i - 1][0], house[i - 1][2]) + cost2;
        house[i][2] = min(house[i - 1][1], house[i - 1][0]) + cost3;
    }
    
    cout << min(house[N][2], min(house[N][0], house[N][1])) << '\n';
    
    return 0;
}
