#include <iostream>
#include <algorithm>

using namespace std;

struct Mountain {
	int x, y;
};

bool cmp(Mountain a, Mountain b) {
	if (a.x != b.x) return a.x < b.x;
    
	return a.y > b.y;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
	cin >> N;

	Mountain mountains[100005];
	for (int i = 0; i < N; i++) {
        int xVal, yVal;
        cin >> xVal >> yVal;
        
        mountains[i].x = xVal - yVal, mountains[i].y = xVal + yVal;
    }
	sort(mountains, mountains + N, cmp);

	int first = -1, cnt = 0;
	for (int i = 0; i < N; i++) {
		if (mountains[i].y > first) {
			cnt++;
			first = mountains[i].y;
		}
	}

	cout << cnt << '\n';
}
