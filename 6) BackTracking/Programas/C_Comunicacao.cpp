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

int main(){ _

    ll x;

 while(cin >> x)
 {
    int encontrei = 0;
    for(int i=1; i+2!=x; i++)
    {
        if((i) * (i+1) * (i+2) == x)
        {
            cout << i << " " << i+1 << " " << i+2 << endl;
            encontrei = 1;
            break;
        }
    }
    if(encontrei == 0)
        cout << "mensagem falsa" << endl;

 }

  exit(0);
}
