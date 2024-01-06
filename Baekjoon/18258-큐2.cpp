#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;
    
	queue<int> q;

	for (int i = 0; i < N; i++) {
        string order;
        cin >> order;
        
        int num;
		
		if (order == "push") {
			cin >> num;
			q.push(num);
		}
		else if (order == "pop") {
			if (q.empty()) cout << "-1\n";
            else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
        else if (order == "size") cout << q.size() << '\n';
        else if (order == "empty") cout << q.empty() << '\n';
		else if (order == "front") {
			if (q.empty()) cout << "-1\n";
			else cout << q.front() << '\n';
		}
		else {
			if (q.empty()) cout << "-1\n";
			else cout << q.back() << '\n';
		}
	}

	return 0;
}
