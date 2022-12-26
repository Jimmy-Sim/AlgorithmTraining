// Loop:
/*
#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;
  
  int factorial = 1;

  for (int i = N; i >= 1; i--) factorial *= i;
  
  cout << factorial << "\n";

  return 0;
}
*/

// Recursion:
#include <iostream>

using namespace std;

int N;

int factorial(int num)
{
    if (num >= 1) return num * factorial(num - 1);
    else return 1;
}

int main()
{
    cin >> N;

    cout << factorial(N) << '\n';

    return 0;
}