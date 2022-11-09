#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    deque<int> d;

    for (int i = 0; i < N; i++) {
        string order;
        cin >> order;

        int num;

        if (order == "push_front") {
            cin >> num;
            d.push_front(num);
        }
        else if (order == "push_back") {
            cin >> num;
            d.push_back(num);
        }
        else if (order == "pop_front") {
            if (d.size() == 0) {
                num = -1;
            }
            else {
                num = d.front();
                d.pop_front();
            }
            cout << num << "\n";
        }
        else if (order == "pop_back") {
            if (d.size() == 0) {
                num = -1;
            }
            else {
                num = d.back();
                d.pop_back();
            }
            cout << num << "\n";
        }
        else if (order == "size") {
            num = d.size();
            cout << num << "\n";
        }
        else if (order == "empty") {
            if (d.size() == 0) {
                num = 1;
            }
            else {
                num = 0;
            }
            cout << num << "\n";
        }
        else if (order == "front") {
            if (d.size() == 0) {
                num = -1;
            }
            else {
                num = d.front();
            }
            cout << num << "\n";
        }
        else {
            if (d.size() == 0) {
                num = -1;
            }
            else {
                num = d.back();
            }
            cout << num << "\n";
        }
    }

    return 0;
}