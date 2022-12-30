#include <iostream>

using namespace std;

int N;
int num1, num2;
char comma;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num1 >> comma >> num2;

        cout << num1 + num2 << '\n';
    }

    return 0;
}