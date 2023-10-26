#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false), cout.tie(nullptr), cout.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> lengths;
    for (int i = 0; i < N; i++) {
        int length;
        cin >> length;
        lengths.push_back(length);
    }
    sort(lengths.begin(), lengths.end());

    int cnt = 0;
    while (lengths.size() > 1) {
        lengths[lengths.size() - 2] += lengths[lengths.size() - 1];
        lengths[0]--;
        cnt++;

        lengths.pop_back();

        if (lengths[0] == 0) {
            for (int i = 0; i < lengths.size(); i++) lengths[i] = lengths[i + 1];
            lengths.pop_back();
        }
    }

    cout << cnt << '\n';
}
