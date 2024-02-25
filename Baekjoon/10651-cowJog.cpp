#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N, T;
    cin >> N >> T;

    vector<long long> cows;
    for (int i = 0; i < N; i++) {
        long long position, speed;
        cin >> position >> speed;
        
        position = -(position + speed * T);

        if (cows.empty() || position >= cows.back()) cows.push_back(position);
        else *upper_bound(cows.begin(), cows.end(), position) = position;
    }

    cout << cows.size() << '\n';
  
    return 0;
}
