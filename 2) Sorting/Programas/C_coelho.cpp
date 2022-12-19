#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;


int main(){

    int N;
    scanf("%d",&N);

    int valorRec;
    int sizeVec;
    int aux;

    int p1,p2,x,caso=1;

    for (int q=0; q<N ; q++){

        scanf("%d",&valorRec);
        scanf("%d",&sizeVec);

        vector <int> vetor;

            for(int i=0;i<sizeVec;i++){
                scanf("%d",&aux);
                vetor.push_back(aux);
            }
        //agora comeca o algoritimo 

        for(int i=0;i<sizeVec-1;i++){
            for(int j= i+1 ;j<sizeVec ;j++){

                if( (i != j) && (vetor[i]+vetor[j] == valorRec)){

                    printf("\nCaso #%d: %d %d",caso,(i+1),(j+1));

                    caso++;


                }


            }

        }

        vetor.clear();

    }


    return 0;
}
