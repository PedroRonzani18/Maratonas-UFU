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

    ll n,a;

    while(1)
    {
        vector<pair<int,int>> v;

        cin >> n;
        if(n == 0) exit(0);

        for(ll i=0; i<n; i++)
        {
            cin >> a;
            v.push_back(make_pair(a,i));
        }

        sort(v.rbegin(),v.rend());

        cout << v[1].second + 1 << endl;
    }


  exit(0);
}