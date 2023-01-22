#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1005;

struct Cow {
    int position, infected;
};

bool cmp(Cow x, Cow y) {
    return x.position < y.position;
}

int N;
Cow cow[MAX];
int minDistance = 1000005;
int ans = 1;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> cow[i].position >> cow[i].infected;
    
    sort(&cow[0], &cow[N], cmp);

    for (int i = 1; i < N; i++) {
        int distance = 1000001;
        int curCow = cow[i].position, leftCow = cow[i - 1].position;
        int curCowInfected = cow[i].infected, leftCowInfected = cow[i - 1].infected;

        if ((curCowInfected && !leftCowInfected) || (!curCowInfected && leftCowInfected)) distance = curCow - leftCow;

        minDistance = distance < minDistance ? distance : minDistance;
    }

    minDistance--;

    for (int i = 1; i < N; i++) {
        int curCow = cow[i].position, leftCow = cow[i - 1].position;
        int curCowInfected = cow[i].infected, leftCowInfected = cow[i - 1].infected;

        if (curCowInfected) {
            if (leftCowInfected) {
                if (curCow - leftCow > minDistance) ans++;
            }
            else {
                ans++;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}