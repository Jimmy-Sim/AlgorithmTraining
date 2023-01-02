#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int N;
deque<int> numbers, newDeque;
int ans;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        numbers.push_back(num);
    }

    sort(&numbers[0], &numbers[N]);

    while (!numbers.empty()) {
        newDeque.push_back(numbers.back()), newDeque.push_back(numbers.front());

        numbers.pop_back(), numbers.pop_front();
    }

    for (int i = 0; i < N - 1; i++) {
        cout << abs(newDeque[i + 1] - newDeque[i]) << ' ';
        ans += abs(newDeque[i + 1] - newDeque[i]);
    }

    cout << ans << '\n';
    
    return 0;
}