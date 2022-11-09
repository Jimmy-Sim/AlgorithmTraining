#include<iostream>
#include <algorithm>
#include<vector>
using namespace std; 
int arr[11];
int N;


vector<int> v;
bool visited[11];
void dfs(int level)
{
    if (level == 3) {
        for (int i = 0; i < 3; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            v.push_back(arr[i]);
            dfs(level + 1);
            visited[i] = false;
            v.pop_back();
        }
    }

    return ; 
}



int main()
{
     cin >> N; 

    for(int i = 0; i < N; i++)
    {
        cin >>arr[i]; 
    }

    sort(&arr[0], &arr[N]);

    dfs(0);

    return 0;
}