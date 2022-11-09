#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    deque<int> d;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        if (num == 0)
        {
            d.pop_back();
        }
        else
        {
            d.push_back(num);
        }
    }

    int total = 0;
    if (d.size() > 0)
    {
        for (int i = 0; i < d.size(); i++)
        {
            total += d[i];
        }
    }

    cout << total << "\n";

    return 0;
}