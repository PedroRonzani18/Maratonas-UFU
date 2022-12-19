#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main(){



int zero=0;
int verf;
int auxVet=0;
int a,b;
int primos[1000];

    for(int i=0;i<1000;i++){

        primos[i] = 0;

    }

    scanf("%d",&a);
    scanf("%d",&b);

//primo crescente
    if(a <= b){

        for(int i=a+1;i<=b-1;i++){
            verf=0;
            for(int j=1;j<=i;j++){

                if(i%j == 0){
                    verf++;
                }
            }

                if(verf<=2){
                    primos[auxVet] = i;
                    auxVet++;
                }
        }


//primo decrescente
    }else if(a > b){

        for(int i=a-1;i>=b+1;i--){
            verf=0;
            for(int j=1;j<=i;j++){

                if(i%j == 0){
                    verf++;
                }
            }

                if(verf<=2){
                    primos[auxVet] = i;
                    auxVet++;
                }
        }

    }


    if(primos[0] == 0){
        printf("%d\n",zero);
    }

    for(int i=0; (primos[i] != 0); i++){

        printf("%d ",primos[i]);

    }

    return 0;
}
