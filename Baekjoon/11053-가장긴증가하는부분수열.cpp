#include<iostream>
#define MAX_ 1001
using namespace std; 

int arr[MAX_], dp[MAX_];
int ans;

int main(){

    int n; 
    cin >> n; 
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        dp[i] = 1; 
        for(int j = 0; j < i; j++)
        {
            if(arr[j] < arr[i])
            {
                dp[i] = (dp[j] + 1 > dp[i])? dp[j] + 1 : dp[i];
            }  
        }
        ans = (ans < dp[i]) ? dp[i] : ans;
    }
    cout << ans << '\n'; 
    return 0; 
}