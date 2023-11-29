#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int K, N;
	cin >> K >> N;
    
	for (int i = 0; i < N; i++) {
		int speed, distance = K;
		cin >> speed;
        
        int speedingDistance = 0, slowingDistance = 0, time = 0;
	    for (int j = 1; j <= K; j++) {
	    	speedingDistance += j;
		    time++;
		    if (speedingDistance + slowingDistance >= distance) break;

		    if (j >= speed) {
		    	slowingDistance += j;
		    	time++;
		    	if (speedingDistance + slowingDistance >= distance) break;
		    }
	    }
        
		cout << time << '\n';
	}
    
    return 0;
}
