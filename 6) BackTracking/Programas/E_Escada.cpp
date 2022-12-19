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

    ll x,y;

 while(1)
 {
    ll soma =0;
    vector<ll> v;
    cin >> x;
    if(x==0)
        exit(0);

    if(x==1)
    {
        cin >> y;
        soma += 10;
    }
    else
    {
        for(int i=0; i<x; i++)
        {
            cin >> y;
            v.push_back(y);
        }

        for(int i=0; i<v.size()-1; i++)
        {
            ll dif = v[i+1] - v[i];
            if(dif >=10)
                soma += 10;
            else
                soma += dif;
        }
        soma += 10;
    }
    cout << soma << endl;

 }

  exit(0);
}
