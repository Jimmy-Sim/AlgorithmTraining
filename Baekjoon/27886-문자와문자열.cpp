#include <iostream>

using namespace std;

string word;
int position;

int main()
{
    cin >> word;
    cin >> position;

    cout << word[position - 1] << '\n';

    return 0;
}