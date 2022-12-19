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

int main()
{
    int n; scanf("%d",&n);

    while(n--)
    {
        int c1,c2;
        vector<int> s1;
        vector<int> s2;
        int golsCasa1=0;
        int golsCasa2=0;
        int golsFora1=0;
        int golsFora2=0;

        scanf("%d x %d",&c1,&c2);
        s1.push_back(c1);
        s2.push_back(c2);

        golsCasa1+=c1;
        golsFora2+=c2;

        scanf("%d x %d",&c1,&c2);
        s1.push_back(c2);
        s2.push_back(c1);

        golsCasa2+=c1;
        golsFora1+=c2;

        int soma1 = s1[0] + s1[1];
        int soma2 = s2[0] + s2[1];

        if(soma1 > soma2)
        {
            printf("Time 1\n");
        }

        else if(soma1 < soma2)
        {
            printf("Time 2\n");
        }

        else if(soma1 == soma2)
        {
            if(golsFora1 > golsFora2)
            {
                printf("Time 1\n");
            }

            else if(golsFora1 < golsFora2)
            {
                printf("Time 2\n");
            }

            else
                printf("Penaltis\n");
        }
    }


}