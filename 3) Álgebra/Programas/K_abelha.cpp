#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b; cin >> a; cin >> b;

    int mmc = gcd(a,b);

    if(mmc > 1)
    {
        printf("%d %d %d\n",a/mmc,b/mmc,mmc);
    }
    else printf("Fica na colmeia\n");

    return 0;
}