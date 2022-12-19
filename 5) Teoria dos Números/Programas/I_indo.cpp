#include <bits/stdc++.h>

using namespace std;



int main(){

unsigned long long int A, B, C,aux = 0;

    cin >> A;
    cin >> B;
    cin >> C;

        
    if(A>B){
        aux=B;
    }
    else{
        aux = A;
    }
    if(aux > C){

        aux = C;
    }

    unsigned long long int result;

        while(aux >0){

            if((A%aux == 0) && (B%aux == 0) && (C%aux == 0)){

                cout << aux << "\n";
                break;
            }
            aux--;

        }
    
    return 0;
}