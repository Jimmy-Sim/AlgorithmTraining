#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int case_ = 1;
    while (N != 0) {
        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;
        }

        cout << "Case " << case_ << ": Sorting... done!\n";

        case_++;

        cin >> N;
    }

    return 0;
}