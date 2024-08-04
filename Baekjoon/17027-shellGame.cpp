#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    int in1[5] = {}, in2[5] = {}, in3[5] = {};
    in1[1] = 1, in2[2] = 1, in3[3] = 1;
    
    for (int i = 0; i < N; i++) {
        int a, b, guess;
        cin >> a >> b >> guess;

        swap(in1[a], in1[b]);
        swap(in2[a], in2[b]);
        swap(in3[a], in3[b]);

        if (in1[guess]) cnt1++;
        if (in2[guess]) cnt2++;
        if (in3[guess]) cnt3++;
    }

    cout << max(cnt1, max(cnt2, cnt3)) << '\n';
    
    return 0;
}
