#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    stack<int> s;

    for (int i = 0; i < N; i++) {
        string order;
        cin >> order;

        int num;

        if (order == "push") {
            cin >> num;
            s.push(num);
        }
        else if (order == "pop") {
            if (s.size() == 0) {
                num = -1;
            }
            else {
                num = s.top();
                s.pop();
            }
            cout << num << "\n";
        }
        else if (order == "size") {
            num = s.size();
            cout << num << "\n";
        }
        else if (order == "empty") {
            if (s.size() == 0) {
                num = 1;
            }
            else {
                num = 0;
            }
            cout << num << "\n";
        }
        else {
            if (s.size() == 0) {
                num = -1;
            }
            else {
                num = s.top();
            }
            cout << num << "\n";
        }
    }

    return 0;
}