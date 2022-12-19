#include <bits/stdc++.h>

using namespace std;

int main(){

    int d=1,q=1;

    int perc,ver;

    while(d && q){//enquanto dist e quicada sao != 0

    cin >> d >> q;
    
    perc=0;
    ver=0;

    for(int k=q ; k>0 ; k--){

        perc=0;
            for(int j=k ; j>0 ; j--){//testa do q ate 1

                for(int i=0 ; i<j ; i++){

                    perc +=  j ;

                    if(d == perc){
                        cout << 1 << endl;
                        ver++;
                        break;
                    }
                    
                    // cout << "[" << perc << "]" << endl;
                    
                }


                if(ver){
                    break;
                }
                
            }
            
        if(ver){
            break;
        }
        else if(k==1){
            cout << 0 << endl;
        }

    }
    }
    

    return 0;
}