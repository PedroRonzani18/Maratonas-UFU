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

int main(){

    int e,d,m;

    while(1)
    {
        cin >> e;
        if(e == 0)
            exit(0);
        cin >> m >> d;

        cout << (e*d*m)/(d-e) << endl;
    }

  exit(0);
}