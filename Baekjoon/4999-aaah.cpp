#include <iostream>

using namespace std;

string jonAaah, doctorAaah;

int main()
{
    cin >> jonAaah >> doctorAaah;

    if (doctorAaah.size() <= jonAaah.size()) cout << "go\n";
    else cout << "no\n";

    return 0;
}