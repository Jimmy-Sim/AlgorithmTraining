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