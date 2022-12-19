#include <bits/stdc++.h>
using namespace std;

int main(){ 

    float c,j;
    int d,m,a;
    char ch;

    cin >> c >> j >> ch >> d >> m >> a;

    float juro = 1 + j/100;

    printf("a.d = %.4f\na.m = %.4f\na.a = %.4f\n",c*pow(juro,d),c*pow(juro,m),c*pow(juro,a));


  exit(0);
}
