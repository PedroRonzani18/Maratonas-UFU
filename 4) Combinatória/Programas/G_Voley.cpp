#include <bits/stdc++.h>

using namespace std;


int fatorial(int n){
    int prod = 1;

    while(n>0){
        prod*=n;
        n--;
    }
    return prod;

}


int main(){

    int T;
    cin >> T;

    int result=T;

    result = result *(T-1) *(T-2);

    cout << result << "\n";

    return 0;
}
