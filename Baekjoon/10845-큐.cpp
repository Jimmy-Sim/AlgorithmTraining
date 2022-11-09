#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

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
            if (q.size() == 0) {
                num = -1;
            }
            else {
                num = q.front();
                q.pop();
            }
            cout << num << "\n";
        }
        else if (order == "size") {
            num = q.size();
            cout << num << "\n";
        }
        else if (order == "empty") {
            if (q.size() == 0) {
                num = 1;
            }
            else {
                num = 0;
            }
            cout << num << "\n";
        }
        else if (order == "front") {
            if (q.size() == 0) {
                num = -1;
            }
            else {
                num = q.front();
            }
            cout << num << "\n";
        }
        else {
            if (q.size() == 0) {
                num = -1;
            }
            else {
                num = q.back();
            }
            cout << num << "\n";
        }
    }

    return 0;
}