#include <bits/stdc++.h>

using namespace std;

int main(){

    int x,y; cin >> x >> y;

    vector<pair<float,string>> v;
    vector<pair<string,float>> novo;

    for(int i=0; i<x; i++)
    {
        string auxs; float auxf;

        cin >> auxs >> auxf;

        v.push_back(make_pair(auxf,auxs));
    }

    for(int i=0; i<v.size(); i++)
    {
        for(int j=v.size()-1; j>i; j--)
        {
            if(v[i].first == v[j].first)
            {
                v.erase(v.begin() + j);
            }
        }
    }



    sort(v.begin(),v.end());



    int tam = v.size()-y;

    for(int i=v.size()-1; i>=tam ;i--)
    {

        string auxs; float auxf;

        auxs = v[i].second;
        auxf = v[i].first;

        novo.push_back(make_pair(auxs,auxf));
    }






    sort(novo.begin(),novo.end());

    for(int i=0; i<novo.size(); i++)
    {
        cout << novo[i].first << endl;
    }


  exit(0);
}
