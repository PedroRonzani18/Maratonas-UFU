#include <bits/stdc++.h>
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;

typedef long long ll;

int max_subarray_sum(vector<int> v)
{
    int best = 0, sum = 0, x, y;
    vector<int> indices;

    for(int i=0; i < v.size(); i++)
    {
        sum = max(v[i], sum + v[i]);

        if(sum > best)
        {
            best = sum;
            indices.push_back(i);
        }

        best = max(best, sum);
    }

    //cout << indices.back() << " " << indices[indices.size()-2] << " " << best << endl;
    
    for(int i:indices)
    {
        cout << i << " ";
    }
    cout << endl;

    return best;
}

int main(){

    int e;

    vector<int> v;
    vector<int> som;

    while(cin >> e)
    {
        v.push_back(e);
    }

    max_subarray_sum(v);
}