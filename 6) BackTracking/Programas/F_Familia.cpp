#include <bits/stdc++.h>
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;

#define _   ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second
#define pb push_back

typedef long long ll;

const int INF = 0x7f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<vector<int>> graph;
vector<bool> vis;

unsigned long long int fatorial(unsigned long long int n)
{
unsigned long long int factorial = 1;
for(int i=1; i<=n; ++i)
    factorial *= i; 
return factorial;
}

int main(){ _

unsigned long long int x;

 while(1)
 {
    cin >> x;
    if(x == 0)
        exit(0);
    
    cout << fatorial(x) << endl;;

 }

  exit(0);
}
