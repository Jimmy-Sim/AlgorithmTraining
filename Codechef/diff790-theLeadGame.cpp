#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	int plyr1 = 0, plyr2 = 0;
	int mxPlyr, mxLd = 0;
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    plyr1 += a, plyr2 += b;
	    
	    if (plyr1 - plyr2 > mxLd) {
	        mxLd = plyr1 - plyr2;
	        mxPlyr = 1;
	    }
	    else if (plyr2 - plyr1 > mxLd) {
	        mxLd = plyr2 - plyr1;
	        mxPlyr = 2;
	    }
	}
	
	cout << mxPlyr << ' ' << mxLd << '\n';
	
	return 0;
}