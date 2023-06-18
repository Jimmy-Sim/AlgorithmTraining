#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, x;
	    cin >> n >> x;
	    
	    int marks[105];
	    for (int i = 1; i <= n; i++) cin >> marks[i];
	    sort(&marks[1], &marks[n + 1], cmp);
	    
	    cout << marks[x] - 1 << '\n';
	}
	
	return 0;
}