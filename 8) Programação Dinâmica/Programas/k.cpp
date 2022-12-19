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

    int e;

    vector<int> v;
    vector<int> som;

    while(cin >> e)
    {
        v.push_back(e);
    }

    // for(int i=0; i<v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    //cout << endl;

    for(int i=1; i<=v.size(); i++) // quantidade
    {

        for(int j=0; j<v.size(); j++) // posicao inicial
        {
            ll soma = 0;

            for(int k=j; k<i; k++) // pósicao atuial
            {   
                soma += v[k];
                //cout << v[k] << " k " << k << " j " << j << " i " << i << " ";
            }

            som.push_back(soma);
        }
    }

    sort(som.rbegin(),som.rend());

    cout << som[0] << endl; 
}