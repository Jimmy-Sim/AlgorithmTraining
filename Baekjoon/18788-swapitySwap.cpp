#include <iostream>
#include <stack>

using namespace std;

const int MAX = 105;

int N, K;
int A1, A2;
int B1, B2;
int K1[MAX], K2[MAX], K3[MAX], K4[MAX];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N >> K;
    cin >> A1 >> A2;
    cin >> B1 >> B2;

    for (int i = 1; i <= N; i++) K1[i] = i, K2[i] = i, K3[i] = i, K4[i] = i;

    stack<int> reverse;
    // K1:
    for (int i = A1; i <= A2; i++) reverse.push(K1[i]);
    for (int i = A1; i <= A2; i++) {
        K1[i] = reverse.top();
        reverse.pop();
    }

    for (int i = B1; i <= B2; i++) reverse.push(K1[i]);
    for (int i = B1; i <= B2; i++) {
        K1[i] = reverse.top();
        reverse.pop();
    }
    
    // K2:
    for (int i = 0; i < 2; i++) {
        for (int i = A1; i <= A2; i++) reverse.push(K2[i]);
        for (int i = A1; i <= A2; i++) {
            K2[i] = reverse.top();
            reverse.pop();
        }

        for (int i = B1; i <= B2; i++) reverse.push(K2[i]);
        for (int i = B1; i <= B2; i++) {
            K2[i] = reverse.top();
            reverse.pop();
        }
    }
    
    // K3:
    for (int i = 0; i < 3; i++) {
        for (int i = A1; i <= A2; i++) reverse.push(K3[i]);
        for (int i = A1; i <= A2; i++) {
            K3[i] = reverse.top();
            reverse.pop();
        }

        for (int i = B1; i <= B2; i++) reverse.push(K3[i]);
        for (int i = B1; i <= B2; i++) {
            K3[i] = reverse.top();
            reverse.pop();
        }
    }
    
    // K4:
    for (int i = 0; i < 4; i++) {
        for (int i = A1; i <= A2; i++) reverse.push(K4[i]);
        for (int i = A1; i <= A2; i++) {
            K4[i] = reverse.top();
            reverse.pop();
        }

        for (int i = B1; i <= B2; i++) reverse.push(K4[i]);
        for (int i = B1; i <= B2; i++) {
            K4[i] = reverse.top();
            reverse.pop();
        }
    }

    if (K % 4 == 0) {
        for (int i = 1; i <= N; i++) cout << K4[i] << "\n";
    }
    else if (K % 3 == 0) {
        for (int i = 1; i <= N; i++) cout << K3[i] << "\n";
    }
    else if (K % 2 == 0) {
        for (int i = 1; i <= N; i++) cout << K2[i] << "\n";
    }
    else {
        for (int i = 1; i <= N; i++) cout << K1[i] << "\n";
    }
    
    return 0;
}