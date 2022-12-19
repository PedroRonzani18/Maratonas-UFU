#include <bits/stdc++.h>

using namespace std;


unsigned long long int joananati(int n){

    // f1 = f2 =f3=1  fn = fn-1 + fn-2 + fn-3

    unsigned long long int  dp[n];
    dp[0] = 1;
    dp[1] = 1;
 
    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i - 1] +
                (dp[i - 2] * 3);
    }
    //  for (int i = 0; i < n; i++)
    //      cout << dp[i] << " ";

    
    return dp[n-1];

}

int main(){

int a;

    cin >> a;

    cout << joananati(a) << "\n";

    return 0;
}