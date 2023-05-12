#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string number;
    cin >> number;

    stack<char> newNumber;
    int index = number.size() - 1, cnt = 0;
    while (index >= 0) {
        newNumber.push(number[index]);
        index--;
        cnt++;
        if (index >= 0 && cnt % 3 == 0) newNumber.push(',');
    }

    int size = newNumber.size();
    for (int i = 0; i < size; i++) {
        cout << newNumber.top();
        newNumber.pop();
    }
    cout << '\n';

    return 0;
}